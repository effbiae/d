m=[b"av;",b"['/\\",b":+-*%!&|<>=~,^#_$?@.",b";)]\n "]
c=list(b';'+b' '*255)
def d(x):print(rs(x,chr))
def f(x,s):
 for a in s:c[a]=x
for i in range(3):f(m[0][i],m[i+1])
def n():
 global i,s
 if s[i]:i+=1;return s[i-1]
 return 0;
def q():global i,s;return b';'[0]==c[s[i]]
def E(x):
 while n() in b";[(":
  if not type(x) is type([]):x=[x]
  x=x+[e(t())]
 return x
def t():
 global s,i
 if q():return []
 x=n() if b'('[0]-s[i] else x[1] if 3>len(x:=E(s[i])) else x
 while b'a'[0]==c[s[i]]:
  x=E(x) if b'['[0]==s[i]else[n(),x]
 return x
def v():global s,i;return b';'[0]<c[s[i-1]]
def e(x):
 if q():return x
 v_=v();f=t();return [f,x,e(t())]if v()>v_ else [x,e(f)]
def parse(x):global s,i;s=b'('+bytes(x,'utf-8')+b'\0';i=0;return t()
def rs(x,f):
 if type(x) is type([]):return [rs(a,f) for a in x]
 return f(x)
def test():
    import sys
    if 0: #generate test cases
        print('[')
        for x in ["x;y","(x;y)","f[x;y]","x+y","x+*y","1+3*x","(+x)%y","(+/x)%#x","x+m[*i]/y"]:
            print("[%12s,%s ],"%(repr(x),rs(parse(x),chr)))
        print(']')
    for x,y in [
        [       'x;y',['(', 'x', 'y'] ],
        [     '(x;y)',['(', 'x', 'y'] ],
        [    'f[x;y]',['f', 'x', 'y'] ],
        [       'x+y',['+', 'x', 'y'] ],
        [      'x+*y',['+', 'x', ['*', 'y']] ],
        [     '1+3*x',['+', '1', ['*', '3', 'x']] ],
        [    '(+x)%y',['%', ['+', 'x'], 'y'] ],
        [  '(+/x)%#x',['%', [['/', '+'], 'x'], ['#', 'x']] ],
        [ 'x+m[*i]/y',['+', 'x', [['/', ['m', ['*', 'i']]], 'y']] ],
        ]:
        if (r:=rs(parse(x),chr))!=y:print('!',x,r,'!=',y);sys.exit(1)
if __name__=='__main__':
 test()
