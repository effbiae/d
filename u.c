#include"_.h"
#define O printf
#define rx k_(1,x)
U k(i2,U,U),k_(i2,U),tn(i2,i2);
Z0*P=":+-*%&|<>=~.!@?#_^,$LMS...ERZ'/\\()";static i2 OFFSET=-1;i2 find(i0 x){i0*p;return (p=strchr(P,x))?p-P+OFFSET:-1;}
U mo(i0 c,Ux){return k(find(c),0,x);}
U dy(i0 c,Ua,Ux){return k(find(c),a,x);}
Ob(U x){O("t %d ",tx);i(64,O("%d",1&x>>(63-i)));O(" ");}
Oa(U x){tx==2?O("%d",ix):O("%f",ex);}
O0(U x){O("(");i(nx,prin(k(12,rx,ti(i)));$(i+1<$,O(";")));O(")");}
OA(U x){P(!nx,O("()"))P(nx==1,O(",");prin(k(12,rx,ti(0))))P(!tx,O0(x));i2*a=k_(2,x);i(nx,tx==2?O("%d",a[i]):O("%f",((e2*)a)[i]);$(i+1<$,O(" ")));}
prin(U x){$(ax,Oa(x))OA(x);}print(U x){prin(x);O("\n");}
U each(U(*ff)(U),U x){U r=tn(0,nx);U*p=k_(2,r);i(nx,p[i]=ff(k(12,rx,ti(i))));return r;}
U til(Ux){return mo('!',x);}
main(){
 k_(0,0);
 print(te(1.));
 print(ti(1));
 U x,y;
 y=mo('!',ti(3));  print(y);
 x=mo('%',te(4.)); print(x);
 x=dy('%',k_(1,y),ti(2));print(x);
 x=each(til,y);print(x);
}
