m=[b"av;",b"['/\\",b":+-*%!&|<>=~,^#_$?@.",b";)]\n "]
c=[b';'[0]]+list(b' '*256)
def f(x,s):
 for a in s:c[a]=x
[f(m[0][i],m[i+1])for i in range(3)]
def ix(x,c):
 for i in range(len(x)):
  if c==x[i]:return i
 return -1
def n():
 global i,s
 if s[i]:i+=1;return s[i-1]
 return 0;
def q():global i,s;return b';'[0]==c[s[i]]
def E(x):
 while 1+ix(b";[(",n()):
  if not type(x) is type([]):x=[x]
  x=x+[e(t())]
 return x
def t():
 global s,i
 if q():return tn(0)
 x=n() if b'('[0]-s[i] else x if 3>len(x:=E(s[i])) else x[1]
 while b'a'[0]==c[s[i]]:
  x=E(x) if b'['[0]==s[i]else[n(),x]
 return x
def v():global s,i;return b';'[0]<c[s[i-1]]
def e(x):
 if q():return x
 v_=v()
 return [f,x,e(t())]if [f:=t(),v()][1]>v_ else [x,e(f)]
def parse(x):global s,i;s=b'('+bytes(x,'utf-8')+b'\0';i=0;return t()
def test(o):
 ["x;y","(x;y)","f[x;y]","x+y","x+*y","1+3*x","(+x)%y","(+/x)%#x","x+m[*i]/y"]
def rs(x,f):
 if type(x) is type([]):return [rs(a,f) for a in x]
 return f(x)
if __name__=='__main__':
 import sys
 print([rs(parse(x.strip()),chr) for x in sys.stdin.readlines()])
