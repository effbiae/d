#!/usr/bin/python3
from p import parse;import sys,os
P=open("P").read()
d={'\\':'scan','/':'over',"'":'each'}
def v(x):return P.find(x)
def tr(x):
 global fni;name='tr'+str(fni);fni+=1;a=x[0];p=v(a)
 if type(x)==str:
  if-1<p:
   if len(x)==1:fns[name]='F(%s,k(%s,a,x))'%(name,p)
   else:assert(x[1]==':');fns[name]='f(%s,k(%s,0,x))'%(name,p)
  else:return x+'fun'
 else:
  if a=="'"and len(x)==3:fns[name]='f(%s,%s(%s(x)))'%(name,tr(x[1]),tr(x[2]))
  else:
   if a in d:
    fns[name]='f(%s,%s(%s,x))'%(name,d[a],tr(x[1]))
   else:#a projection
    assert(-1<p and len(x)==3 and x[2]==())
    fns[name]='f(%s,k(%s,%s,x))'%(name,p,e(x[1]))
 return name
def la(f,x):name=f+'fun';fns[name]='f(%s,%s)'%(name,e(x));return name
def e(x):
 a=x[0];p=v(a[0])
 if a=='::':return la(*x[1:])
 if len(a)==2:
  if len(x)==2:
   return '%s(%s,%s)'%(d[a[0]],tr(a[1]),e(x[1]))
  elif len(x)==3:
   if a[0]=='\\':return'niters(%s,%s,%s)'%(tr(a[1]),x[1],e(x[2]))
   else:print("nyi: no dyadic %s"%a[0]);return 0
 if a=='[':return"(%s)"%",".join([e(x)for x in x[1:]])
 if-1<p:
  if len(x)==2:return"k(%d, 0,%s)"%(p,e(x[1]))
  if len(x)==3:return"k(%d,%s,%s)"%(p,e(x[1]),e(x[2]))
 if x in'0123456789':return"ti(%s)"%x
 return'r_(%s)'%x
f=sys.stdin
while 1:
 global fns;fns={};fni=0;
 if f.isatty():print(" ",end="");sys.stdout.flush();
 x=f.readline()
 if not x or x[0]=='\\':sys.exit(0)
 x=parse(x)
 main=e(x)
 if main:
  g=open("g.c","w")
  g.write('#include"c.h"\n')
  for a in fns:g.write(f'{fns[a]}\n')
  g.write("int main(){k_();print(%s);}\n"%main)
  g.close()
  os.system("make g >/dev/null && ./g")
