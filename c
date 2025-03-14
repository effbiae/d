#!/usr/bin/python3
from p import parse,train;import sys,os
P=eval(os.popen('grep -o \'P=":+.*"\' k.edu/z.c').read()[2:]);assert(P[0]==':');trains={};tri=0
def v(x):return P.find(x)-1
def tr(x):
 global tri;name='tr'+str(tri);tri+=1
 if type(x) is str:
  p=v(x[0]);assert(-2<p)
  if len(x)==1:trains[name]='F(%s,k(%s,a,x))'%(name,p)
  else:assert(x[1]==':');trains[name]='f(%s,k(%s,0,x))'%(name,p)
 else:
  if x[0]=='o':trains[name]='f(%s,%s(%s(x)))'%(name,tr(x[1]),tr(x[2]))
  else:
   if x[0]in"'\\/":#is a derived verb
    assert(x[0]=='\\');trains[name]='f(%s,scan(%s,x))'%(name,tr(x[1]))
   else:#a projection
    p=v(x[0]);assert(-2<p and len(x)==3 and x[2]==' ')
    trains[name]='f(%s,k(%s,%s,x))'%(name,p,e(x[1]))
 return name
def e(x):
 if train(x):print(x);return 0
 a=x[0]
 if len(a)==2:
  if a[0]=="'":return 'each(%s,%s)'%(tr(a[1]),e(x[1]))
  if a[0]=='\\':assert(len(x)==3);return f'niters({tr(a[1])},{x[1]},{e(x[2])})'
 if a=='[':return "(%s)"%",".join([e(x) for x in x])
 p=v(a)
 if -1<p:
  if len(x)==2:return "k(%d, 0,%s)"%(p,e(x[1]))
  if len(x)==3:return "k(%d,%s,%s)"%(p,e(x[1]),e(x[2]))
 if a=='::':return la[x[1]]
 return "ti(%s)"%x
f=sys.stdin
while 1:
 if f.isatty():print(" ",end="");sys.stdout.flush();
 x=f.readline()
 if not x:sys.exit(0)
 x=parse(x)
 if main:=e(x):
  g=open("g.c","w")
  g.write('#include"p.h"\n')
  for a in trains:g.write(f'{trains[a]}\n')
  g.write("main(){k_(0,0);print(%s);}\n"%main)
  g.close()
  os.system("make g >/dev/null && ./g")
