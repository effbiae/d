#!/usr/bin/python3
from p import parse,c,rs
import sys,os
P=os.popen('grep -o \'P=":+.*"\' k.edu/z.c').read()[3:-2];assert(P[0]==':')
f=open(sys.argv[1])
while 1:
    x=f.readline()
    if x:
        print(x:=parse(x))
        print("int main(){print(%s);}"%"k(%d,0,%c)"%(P.index(x[0]),x[1]))
    else:break
