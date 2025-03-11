#!/usr/bin/python3
from p import parse
import sys,os
P=eval(os.popen('grep -o \'P=":+.*"\' k.edu/z.c').read()[2:]);assert(P[0]==':')
trains={}
def v(x):return P.find(x)-1
def train(x):
 name='train'+str(abs(hash(x)))
 if type(x) is str:
  p=v(x[0]);assert(-1<p)
  if len(x)==1:trains[name]='(Ux,U y){return k(%s,x,y);}'%p
  else:assert(x[1]==':');trains[name]='(Ux){return k(%s,0,x);}'%p
 else:
  if x[0]=='o':trains[name]='(Ux){return %s(%s(x));}'%(train(x[1]),train(x[2]))
  else:#is a derived verb
   assert(x[0]=='\\');trains[name]='(Ux){return scan(%s,x);}'%train(x[1])
 return name
def e(x):
 if len(x[0])==2:
  if x[0][0]=="'":return 'each(%s,%s)'%(train(x[0][1]),e(x[1]))
  if x[0][0]=='\\':assert(len(x)==3);return f'niters({train(x[0][1])},{x[1]},{e(x[2])})'
 if x[0]=='[':return "(%s)"%",".join([e(x) for x in x])
 p=v(x[0])
 if -1<p:
  if len(x)==2:return "k(%d, 0,%s)"%(p,e(x[1]))
  if len(x)==3:return "k(%d,%s,%s)"%(p,e(x[1]),e(x[2]))
 if x in "0123456789":return "ti(%s)"%x
f=sys.stdin
while 1:
 if f.isatty():print(" ",end="");sys.stdout.flush();
 x=f.readline()
 if not x:sys.exit(0)
 g=open("g.c","w")
 x=parse(x)
 g.write('#include"p.h"\n')
 main=e(x)
 for a in trains:g.write(f'U {a}{trains[a]}\n')
 g.write("main(){k_(0,0);print(%s);}\n"%main)
 g.close()
 os.system("make g >/dev/null && ./g")
