#include"p.h"
#define O printf
#define r1(x) k_(1,x)
#define r0(x) k_(0,x)
#define rx r1(x)
#define el tn(0,0)
g(at,k(12,x,ti(i)))F(cat,k(17,a,x))f(en,k(17,0,x))
Oa(U x){tx==2?O("%d",ix):O("%f",ex);}
O0(U x){O("(");i(nx,prin(at(i,rx));$(i+1<$,O(";")));O(")");}
OA(U x){P(!nx,O("()"))P(nx==1,O(",");prin(at(0,rx)))P(!tx,O0(x));i2*a=k_(2,x);i(nx,tx==2?O("%d",a[i]):O("%f",((e2*)a)[i]);$(i+1<$,O(" ")));}
prin(U x){$(ax,Oa(x))OA(x);}print(U x){prin(x);O("\n");}
typedef U(*uf)(U),(*ug)(U,U);
U scan(ug gg,U x){$(ax,x=en(x));P(!nx,ti(-1));U t=at(0,rx),r=el;i(nx-1,r=cat(r,r1(t=gg(t,at(i+1,rx)))));r0(x);r0(t);return r;}
f(last,P(ax,x);P(!nx,el);at(nx-1,x))
U over(ug gg,U x){return last(scan(gg,x));}
U each(uf ff,U x){$(ax,x=en(x));U r=tn(0,nx);U*p=k_(2,r);i(nx,p[i]=ff(at(i,rx)));r0(x);return r;}
U itrs(i2 n,uf ff,U x){U r=el;i(n,r=cat(r,ff(rx)));r0(x);return r;}
