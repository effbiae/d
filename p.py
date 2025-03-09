def b(c):return bytes(c,'utf-8')[0]
m=[b"av;",b"['/\\",b":+-*%!&|<>=~,^#_$?@.",b";)]\n "]
c=list(b';'+b' '*255)
def f(x,s):
 for a in s:c[a]=x
for i in range(3):f(m[0][i],m[i+1])
def s0(i):return s[i] if type(s[i])==type(b(' ')) else s[i][0]
def cs(i):return c[s0(i)]
def n():
 global i
 if s[i]:i+=1;return s[i-1]
 return 0;
def q():return b(';')==cs(i)
def E(x):
 while n() in b";[(":
  if not type(x) is type([]):x=[x]
  x=x+[e(t())]
 return x
def t():
 if q():return []
 x=n() if b('(')-s0(i) else x[1] if 3>len(x:=E(s[i])) else x
 while b('a')==cs(i):
  x=E(x) if b('[')==s0(i)else[n(),x]
 return x
def o(x):
 l=x[-1];
 if type(l)is type([]):
  if l[0]==b('o'):return [b('o'),x]
 else:
  if (type(l)!=int) or c[l]!=b(' '):return [b('o')]+x
 return x
def v():return b(';')<cs(i-1)
def e(x):
 if q():return x
 v_=v();f=t();return o([f,x,e(t())]if v()>v_ else [x,e(f)])
def lex(x):
 r=[];i=0
 while i<len(x):
  if not x[i]or x[i+1]-b(':'):r.append(x[i])
  else:r.append(x[i:2+i]);i+=1
  i+=1
 return r
def parse(x):
 global s,i;s=lex(b'('+bytes(x,'utf-8')+b'\0');i=0;r=t();r=rs(r,chr)
 if type(r)is type([])and len(r)and x[0]!='('and r[0]=='(':r[0]='['
 return r
def rs(x,f):
 if type(x) is type([]):return [rs(a,f) for a in x]
 return f(x) if type(x)is type(1) else ''.join([f(a)for a in x])
def test():
    import sys
    if 0: #generate test cases
        print('[')
        for x in ["x;y","(x;y)","f[x;y]","x+y","x+*y","1+3*x","(+x)%y","(+/x)%#x","x+m[*i]/y","3*:/2","5(+\\|:)\\x"]:
            print("[%12s,%s ],"%(x,parse(x)))
        print(']')
    for x,y in [
        [       'x;y',['[', 'x', 'y'] ],
        [     '(x;y)',['(', 'x', 'y'] ],
        [    'f[x;y]',['f', 'x', 'y'] ],
        [       'x+y',['+', 'x', 'y'] ],
        [      'x+*y',['+', 'x', ['*', 'y']] ],
        [     '1+3*x',['+', '1', ['*', '3', 'x']] ],
        [    '(+x)%y',['%', ['+', 'x'], 'y'] ],
        [  '(+/x)%#x',['%', [['/', '+'], 'x'], ['#', 'x']] ],
        [ 'x+m[*i]/y',['+', 'x', [['/', ['m', ['*', 'i']]], 'y']] ],
        [     '3*:/2',[['/', '*:'], '3', '2'] ],
        ['5(+\\|:)\\x',[['\\', ['o',['\\', '+'], '|:']], '5', 'x'] ],
        ]:
        if (r:=parse(x))!=y:print('!',x,r,'!=',y);sys.exit(1)
if __name__=='__main__':
 test()
