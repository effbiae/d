#!/usr/bin/python3
from p import parse;import sys,os
P=eval(os.popen('grep -o \'P=":+.*"\' k.edu/z.c').read()[2:]);assert(P[0]==':');fns={};tri=0
def v(x):return P.find(x)-1
def tr(x):
 global tri;name='tr'+str(tri);tri+=1
 if type(x)is str:
  p=v(x[0])
  if -1<p:
   if len(x)==1:fns[name]='F(%s,k(%s,a,x))'%(name,p)
   else:assert(x[1]==':');fns[name]='f(%s,k(%s,0,x))'%(name,p)
  else:return x+'fun'
 else:
  if x[0]=='o':fns[name]='f(%s,%s(%s(x)))'%(name,tr(x[1]),tr(x[2]))
  else:
   if x[0]in"'\\/":#is a derived verb
    assert(x[0]=='\\');fns[name]='f(%s,scan(%s,x))'%(name,tr(x[1]))
   else:#a projection
    p=v(x[0]);assert(-1<p and len(x)==3 and x[2]==' ')
    fns[name]='f(%s,k(%s,%s,x))'%(name,p,e(x[1]))
 return name
def la(f,x):name=f+'fun';fns[name]='f(%s,%s)'%(name,e(x));return name
def e(x):
 a=x[0]
 if a=='::':return la(*x[1:])
 if len(a)==2:
  if a[0]=="'":return'each(%s,%s)'%(tr(a[1]),e(x[1]))
  if a[0]=='\\':assert(len(x)==3);return f'niters({tr(a[1])},{x[1]},{e(x[2])})'
 if a=='[':return"(%s)"%",".join([e(x)for x in x[1:]])
 p=v(a)
 if -1<p:
  if len(x)==2:return"k(%d, 0,%s)"%(p,e(x[1]))
  if len(x)==3:return"k(%d,%s,%s)"%(p,e(x[1]),e(x[2]))
 if x in '0123456789':return"ti(%s)"%x
 return 'r1(%s)'%x
f=sys.stdin
while 1:
 if f.isatty():print(" ",end="");sys.stdout.flush();
 x=f.readline()
 if not x:sys.exit(0)
 x=parse(x)
 if main:=e(x):
  g=open("g.c","w")
  g.write('#include"p.h"\n')
  for a in fns:g.write(f'{fns[a]}\n')
  g.write("main(){k_(0,0);print(%s);}\n"%main)
  g.close()
  os.system("make g >/dev/null && ./g")
