#!/usr/bin/python3
from p import parse,c,rs
import sys,os
P=os.popen('grep -o \'P=":+.*"\' k.edu/z.c').read()[3:-2];assert(P[0]==':')
def e(x):
 if len(x[0])==2:return "adverb"
 if x[0]=='[':return "(%s)"%[e(x) for x in x].join(",")
 if x[0] in P:
  p=str(P.find(x[0])-1)
  if len(x)==2:return "k(%s, 0,%s)"%(p,e(x[1]))
  if len(x)==3:return "k(%s,%s,%s)"%(p,e(x[1]),e(x[2]))
 if x in "0123456789":return "ti(%s)"%x
f=sys.stdin
while 1:
 print(" ",end="");sys.stdout.flush();x=f.readline()
 if not x:sys.exit(0)
 g=open("g.c","w")
 x=parse(x)
 g.write('#include"_.h"\nU k(i2,U,U),k_(i2,U);print(U);\n')
 g.write("main(){k_(0,0);print(%s);}\n"%e(x))
 g.close()
 os.system("make g >/dev/null && ./g")
