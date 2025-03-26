#include"c.h"
#include<dlfcn.h>
U strlen(const char*);int system(char*);
#define O printf
#undef t
#define Pv(x,z) if(x){_(z);return;}
/*str2ints*/_U(p_,in=strlen(s);Ur=tn(2,n);i2*p=sr;i(n,p[i]=*s++);r,ss)_Z(pO,A(tx==2);i2*p=sx;i(nx,fputc(p[i],f));_r(x),FILE*f,Ux);
/*print*/_U($i,Z0 b[8];int n=sprintf(b,"%d",i);A(n<8);p_(b),ii)
_Z(p2,Pv(ax,p2(en(x)))Pv(tx!=2,print(x);xx())i(nx,O("%c",((i2*)sx)[i]));_r(x),Ux)_Z(printi,p2(x);O("\n"),Ux)
f(t2s,A(!tx|tx==2);P(ax,en(x))Ur=ti('(');i(nx,r=cat(r,t2s(at(rx,i))))r=cat(r,ti(')'));_(r))
/*parse*/Z0*m[]={"av;","['/\\",":+-*%&|<>=~.!@?#_^,$LMS...ERZ",";)]\n "},*P,c[128];_U(fi,sd=s-1;W(*++d)P(*d==ix,ti(d-s));0,ss,Ux)f(v,fi(P,x))
static i2 i,*sb,ns;_D(i2,s,P(i>=ns,' ')sb[i],ii)
ZU t(),e(U);_U(n,ti(r(s(i),i++)))_D(i2,q,';'==c[s(i)])f(E,W(fi(";[(",n()))x=cat(x,en(e(t())));x)
_D(i2,av,';'<c[s(i-1)])f(e,P(q(),x)i2 v_=av();U f=t();av()>v_?_3(f,x,e(t())):_2(x,e(f)))
_U(t,P(q(),el)Ux='('!=s(i)?n():(x=E(ti(s(i))),3>nx)?at(x,1):x;W('a'==c[s(i)])x='['==s(i)?E(x):_2(n(),x);x)
_U(parse,Ux=cat(ti('('),p_(s));sb=sx;ns=nx;i=0;_x(t()),ss)
/*init*/_Z(ini,k_();P=m[2];i(128,c[i]=' ')i(3,sd=m[i+1];W(*d)c[*d++]=m[0][i]))
/*template*/_U(pc,P(ax||tx,pc(s,en(x)))Ur=tn(2,0);ii=0;h(strlen(s),r=cat(r,s[h]=='%'?at(rx,i++):ti(s[h])));A(nx==i);_x(r),ss,Ux)
/*gen*/Z0*ed[4]={"\\/'","scan","over","each"};f(ad,h(3,P(x(at(x,0),ix)==ed[0][h],p_(ed[h+1])));0)
f(eg,P(ax&&ix>='0'&&ix<='9',pc("ti(%)",x));0)
F(mat,in=1;$(ta-tx|(ax?ix-ia:na-nx),n=0);ii=0;W(n&&!ax&&i<nx){U m=mat(at(ra,i),at(rx,i));n=x(m,ix);i++;}_r(a);_x(ti(n));)
F(Aeq,Ur=mat(ra,rx);$(!x(r,ix),p2(pc("~%~%\n",_2(ra,rx)));xx());_r(a);_x(r))
Z0*pts[][2]={{"","()"},{"0","0"},{"1+2","(+12)"},{"+/x","((/+)x)"},{"x[*i]'y","(('(x(*i)))y)"},{0}};
_Z(pt,i2 i=0;W(*pts[i])(Aeq(t2s(parse(*pts[i])),p_(pts[i][1])),i++))
U dl(U e){
FILE*g=fopen("h.c","w");pO(g,pc("#include\"d.h\"\nU d(){return %;}\n",eg(e)));fclose(g);system("make h.so 2>&1|head");
void*l=dlopen("./h.so",RTLD_NOW);$(!l,O("%s\n",dlerror())); void(*ini)()=dlsym(l,"ini");ini(k,tn);U(*d)()=dlsym(l,"d");d();
ini(&k,&tn);return d();}
int main(int n,i0**v){ini();pt();print(dl(parse("4")));
	return 0;}
