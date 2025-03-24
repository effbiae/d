#include"c.h"
#define O printf
#define prf(g,z,x...) int g(x){return _(z);}
static i2 omx=50;void dot(i2 n){$(n>omx,O(".."));}
int prin(i2,U);
prf(Oa,tx==2?O("%d",ix):O("%f",ex),U x)prf(O0,O("(");i(l(nx,omx),prin(0,at(rx,i));$(i+1<$,O(t?"\n ":";")));dot(nx);O(")");_r(x);0,i2 t,U x)
prf(OA,P(nx==1,O(",");prin(0,at(rx,0)))P(!tx||!nx,O0(t,x))i2*a=sx;i(l(nx,100),tx==2?O("%d",a[i]):O("%f",((e2*)a)[i]);$(i+1<$,O(" ")));dot(nx);_r(x);0,i2 t,U x)
prf(prin,P(ax,Oa(x))OA(t,x),i2 t,U x)prf(print,prin(1,x);O("\n"),U x)
U scan(uF w,U x){$(ax,x=en(x));P(!nx,x)U r=tn(0,nx);U*p=sr;*p=at(rx,0);i(nx-1,p[i+1]=w(r_(p[i]),at(rx,i+1)));_r(x);return sqz(r);}
f(last,P(ax||!nx,x)at(x,nx-1))
U over(uF w,U x){return last(scan(w,x));}
U each(uf w,U x){$(ax,x=en(x));U r=tn(0,nx);U*p=sr;i(nx,p[i]=w(at(rx,i)));_r(x);return sqz(r);}
U niters(uf w,i2 n,U x){U r=tn(0,n+1);U*p=sr;*p=r_(x);i(n,p[i+1]=w(r_(p[i])));return sqz(r);}
