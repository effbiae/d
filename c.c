#include"c.h"
#define O printf
static i2 omx=50;void dot(i2 n){$(n>omx,O(".."));}
Oa(U x){tx==2?O("%d",ix):O("%f",ex);}O0(i2 t,U x){O("(");i(l(nx,omx),prin(0,at(rx,i));$(i+1<$,O(t?"\n ":";")));dot(nx);O(")");r_(x);}
OA(i2 t,U x){P(nx==1,O(",");prin(0,at(rx,0)))P(!tx||!nx,O0(t,x));i2*a=k_(2,x);i(l(nx,100),tx==2?O("%d",a[i]):O("%f",((e2*)a)[i]);$(i+1<$,O(" ")));dot(nx);r_(x);}
prin(i2 t,U x){P(ax,Oa(x))OA(t,x);}print(U x){prin(1,x);O("\n");}
U scan(uF w,U x){$(ax,x=en(x));P(!nx,x);U r=tn(0,nx);U*p=k_(2,r);*p=at(rx,0);i(nx-1,p[i+1]=w(_r(p[i]),at(rx,i+1)));r_(x);return sqz(r);}
f(last,P(ax||!nx,x)at(x,nx-1))
U over(uF w,U x){return last(scan(w,x));}
U each(uf w,U x){$(ax,x=en(x));U r=tn(0,nx);U*p=k_(2,r);i(nx,p[i]=w(at(rx,i)));r_(x);return sqz(r);}
U niters(uf w,i2 n,U x){U r=tn(0,n+1);U*p=k_(2,r);*p=_r(x);i(n,p[i+1]=w(_r(p[i])));return sqz(r);}
