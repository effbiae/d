#include"c.h"
#include"P.h"
#include<dlfcn.h>
U strlen(const char*);int system(char*);
#define O printf
#undef t
#define Pv(x,z) if(x){_(z);return;}
/*match*/F(mat,P(a=x,ti(1))in=1;$(ta-tx|(ax?ix-ia:na-nx),n=0);ii=0;W(n&&!ax&&i<nx){U m=mat(at(ra,i),at(rx,i));n=x(m,ix);i++;}_r(a);_x(ti(n));)
/*str2ints*/_U(p_,in=strlen(s);Ur=tn(2,n);i2*p=sr;i(n,p[i]=*s++);r,ss)_U($i,Z0 b[8];int n=sprintf(b,"%d",i);A(n<8);p_(b),ii)
/*print*/_Z(pf,A(tx==2);i2*p=sx;i(nx,fputc(p[i],f));_x(fflush(f)),FILE*f,Ux)_Z(p1,Pv(ax,p1(en(x)))Pv(tx!=2,print(x);xx())pf(stdout,x),Ux)
/*template*/_U(pc,P(ax||tx,pc(s,en(x)))Ur=tn(2,0);ii=0;h(strlen(s),r=cat(r,s[h]=='%'?at(rx,i++):ti(s[h])));A(nx==i);_x(r),ss,Ux)
/*assert match*/F(Amat,Ur=mat(ra,rx);$(!x(r,ix),p1(pc("~%~%\n",_2(ra,rx)));xx());_r(a);_x(r))
/*parse*/Z0*m[]={"av;","['/\\",Ps,";)]\n "},c[128];_U(fi,sd=s-1;W(*++d)P(*d==ix,ti(d-s));0,ss,Ux)f(v,fi(m[2],x))
static i2 i,*sb,ns;_D(i2,s,P(i>=ns,' ')sb[i],ii)ZU t(),e(U);_U(n,ti(r(s(i),i++)))_D(i2,q,';'==c[s(i)])f(E,W(fi(";[(",n()))x=cat(x,en(e(t())));x)
_D(i2,av,';'<c[s(i-1)])f(e,P(q(),x)i2 v_=av();U f=t();av()>v_?_3(f,x,e(t())):_2(x,e(f)))
_U(t,P(q(),el)Ux='('!=s(i)?n():(x=E(ti(s(i))),3>nx)?at(x,1):x;W('a'==c[s(i)])x='['==s(i)?E(x):_2(n(),x);x)
_U(parse,Ux=cat(ti('('),p_(s));sb=sx;ns=nx;i=0;_x(t()),ss)
/*parse test*/Z0*pts[][2]={{"","()"},{"0","0"},{"1+2","(+12)"},{"+/x","((/+)x)"},{"x[*i]'y","(('(x(*i)))y)"},{0}};
f(t2s,A(!tx|tx==2);P(ax,en(x))Ur=ti('(');i(nx,r=cat(r,t2s(at(rx,i))))r=cat(r,ti(')'));_x(r))_Z(pt,i2 i=0;W(*pts[i])(Amat(t2s(parse(*pts[i])),p_(pts[i][1])),i++))
/*gen*/Z0*ed[4]={"\\/'","scan","over","each"};f(ad,U r=fi(*ed,x);r?p_(ed[x(r,ix)+1]):0)
f(eg,P(ax&&ix>='0'&&ix<='9',pc("ti(%)",x));0)
f(dl,//pass a parse tree, get back its evaluation
 FILE*g=fopen("h.c","w");pf(g,pc("#include\"d.h\"\nU d(){return %;}\n",eg(x)));fclose(g);system("rm h.so;make h.so 2>&1|head");
 void*l=dlopen("./h.so",RTLD_NOW);$(!l,O("%s\n",dlerror())); void(*ini)()=dlsym(l,"ini");ini(k,tn);U(*d)()=dlsym(l,"d");d())
_Z(ini,k_();i(128,c[i]=' ')i(3,sd=m[i+1];W(*d)c[*d++]=m[0][i]);pt())
int main(int n,i0**v){ini();print(dl(parse("4")));
	return 0;}
