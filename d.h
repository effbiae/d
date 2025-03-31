#include"c.h"
#include"P.h"
#include<dlfcn.h>
#undef t
U strlen(const char*);
/*str2ints*/_U(p_,in=strlen(s);Ur=tn(2,n);i2*p=sr;i(n,p[i]=*s++);r,ss)f($i,Z0 b[8];int n=sprintf(b,"%d",ix);A(n<8);p_(b))
/*print*/_Z(pf,A(tx==2);i2*p=sx;i(nx,fputc((i0)p[i],f);$(p[i]>>8,fputc(':',f));)_x(fflush(f)),FILE*f,Ux)_Z(p1,$(ax,x=en(x));$(tx!=2,print(x);xx());pf(stdout,x),Ux)
/*match*/F(mat,P(a==x,ti(1))in=1;$(ta-tx|(ax?ix-ia:na-nx),n=0);ii=0;W(n&&!ax&&i<nx){U m=mat(at(ra,i),at(rx,i));n=x(m,ix);i++;}_r(a);_x(ti(n)))
/*template*/_U(pc,P(ax||tx,pc(s,en(x)))Ur=tn(2,0);ii=0;h(strlen(s),r=cat(r,s[h]=='%'?at(rx,i++):ti(s[h])));A(nx==i);_x(r),ss,Ux)
/*assert match*/F(Amat,Ur=mat(ra,rx);$(!x(r,ix),p1(pc("~%~%\n",_2(ra,rx)));xx());_r(a);_x(r))

/*parse test*/Z0*pts[][2]={{"","()"},{"0","0"},{"1;2","([12)"},{"1+2","(+12)"},{"+/x","((/+)x)"},{"x[*i]'y","(('(x(*:i)))y)"},
       {"!:'x","(('!:)x)"},{"1+2-","('(+1())(-2()))"},{"+-","('+:-)"},{"(+/|:)/x","((/('(/+)|:))x)"},{0}};
f(t2s,A(!tx|tx==2);P(ax,ix>>8?cat(ti((i0)ix),ti(':')):en(x))Ur=ti('(');i(nx,r=cat(r,t2s(at(rx,i))))r=cat(r,ti(')'));_x(r))
static U parse(ss);_Z(pt,Ux=mat(ti(1),ti(2));A(!ix);i2 i=0;W(*pts[i])(Amat(t2s(parse(*pts[i])),p_(pts[i][1])),i++))

