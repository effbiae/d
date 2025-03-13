m=["av;","['/\\",":+-*%!&|<>=~,^#_$?@.",";)]\n "]
c=dict([(chr(x),' ') for x in range(255)])
def f(x,s):
 for a in s:c[a]=x
for i in range(3):f(m[0][i],m[i+1])
def s0(i):return s[i][0]
def cs(i):return c[s0(i)]
def n():
 global i
 if s[i]!=' ':i+=1;return s[i-1]
 return ' ';
def q():return ';'==cs(i)
def E(x):
 while n() in ";[(":
  if not type(x) is tuple:x=(x,)
  x=x+(e(t()),)
 return x
def t():
 if q():return ()
 x=n() if '('!=s0(i) else x[1] if 3>len(x:=E(s[i])) else x
 while 'a'==cs(i):
  x=E(x) if '['==s0(i)else(n(),x)
 return x
def tr(x):#is train? if a verb or projection or composition
 if type(x)==int:return c[x]=='v'
def o3(x):return x
def o2(x):
 l=x[1];
 if type(l)is tuple:
  if len(l)and l[0]=='o':return ('o',x)
 else:
  if type(l)!=str or c[l[0]]!=' ':return ('o',)+x
 return x
def v():return ';'<cs(i-1)
def e(x):
 if q():return x
 v_=v();f=t();return o3((f,x,e(t())))if v()>v_ else o2((x,e(f)))
def lex(x):
 r=[];i=0
 while i<len(x):
  if x[i]==' 'or x[i+1]!=':':r.append(x[i])
  else:r.append(x[i:2+i]);i+=1
  i+=1
 return r
def parse(x):
 global s,i;s=lex('('+x+' ');i=0;r=t()
 if type(r)is tuple and len(r)and x[0]!='('and r[0]=='(':r=('[',)+r[1:]
 return r
def test():
    import sys
    if 0: #generate test cases
        print('[')
        for x in ["x;y","(x;y)","f[x;y]","x+y","x+*y","1+3*x","(+x)%y","(+/x)%#x","x+m[*i]/y","1+2-","3*:/2","+-","3+-","5(+\\|:)\\x"]:
            print("        [%12s,%s ],"%(x.__repr__(),parse(x)))
        print(']')
    for x,y in [
        [       'x;y',('[', 'x', 'y') ],
        [     '(x;y)',('(', 'x', 'y') ],
        [    'f[x;y]',('f', 'x', 'y') ],
        [       'x+y',('+', 'x', 'y') ],
        [      'x+*y',('+', 'x', ('*', 'y')) ],
        [     '1+3*x',('+', '1', ('*', '3', 'x')) ],
        [    '(+x)%y',('%', ('+', 'x'), 'y') ],
        [  '(+/x)%#x',('%', (('/', '+'), 'x'), ('#', 'x')) ],
        [ 'x+m[*i]/y',('+', 'x', (('/', ('m', ('*', 'i'))), 'y')) ],
        [      '1+2-',('+', '1', ('-', '2', ())) ],
        [     '3*:/2',(('/', '*:'), '3', '2') ],
        #[        '+-',('o', '+:', '-') ],
        #[       '3+-',('o', ['+', '3', ' '],'-') ],
        ['5(+\\|:)\\x',(('\\', ('o', ('\\', '+'), '|:')), '5', 'x') ],
        ]:
        if (r:=parse(x))!=y:print('!',x,r,'!=',y);sys.exit(1)
if __name__=='__main__':
 test()
