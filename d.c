#include"d.h"
/*parse*/Z0*mi[]={"av;","['/\\",Ps,";)]\n "},c[256];_U(fi,P(!ax,_x(0));sd=s-1;W(*++d)P(*d==ix,ti(d-s));0,ss,Ux)f(v,ax?fi(mi[2],ti((i0)ix)):0)
static i2 i,*sb,ns;_D(i2,mo,i<ns-1&&v(sb[i])&&sb[i+1]==':')_D(i2,verb,P(ax,v(x))P(!nx,0)Ua=_x(x0);_a(aa&&c[(i0)ia]=='a'),Ux)
_D(i2,train,P(verb(rx),_x(1))Ua=0;!ax&&nx==3?_x(_a((a=x0)==ti('\''))||_a((a=x2)&&na==0)):0,Ux)
_U(o3,P(train(r_(z)),_3(ti('\''),_3(x,y,el),z))_3(x,y,z),Ux,U y,U z)f(monad,ax&&c[(i0)ix]=='v'?ti(1<<8|ix):x)F(o2,train(rx)?_3(ti('\''),monad(a),x):_2(a,x))
_D(i2,s,P(i>=ns,' ')sb[i]|mo()<<8,ii)ZU t(),e(U);_U(n,ti(r(s(i),i+=1+mo())))_D(i2,q,';'==c[(i0)s(i)])f(E,W(fi(";[(",n()))x=cat(x,en(e(t())));x)
_D(i2,av,';'<c[(i0)s(i-1)])f(e,P(q(),x)i2 v=av();U f=t();av()>v?o3(f,x,e(t())):o2(monad(x),e(f)))
_U(t,P(q(),el)Ux=!fi("([",s(i))?n():(x=E(ti(s(i))),3>nx)?_(A(nx>1);_x(x1)):x;W('a'==c[(i0)s(i)])x='['==s(i)?E(x):_2(n(),x);x)
_U(parse,Ux=cat(ti('['),p_(s));sb=sx;ns=nx;i=0;_x(t()),ss)
/*gen*/Z0*ed[4]={"\\/'","scan","over","each"};f(ad,U r=fi(*ed,x);r?p_(ed[x(r,ix)+1]):0)
ZU fns;static i2 fni;_Z(fn0,fni=0;fns=tn(2,0))ZU eg(U);_U(fn,fns=cat(fns,pc(s,x)),ss,Ux)
f(ct,/*compile train*/Ua=ax||nx<1?0:x0;U p=ax?v(x):0;P(!p&&!a,x);Ur=pc("t%",en($i(ti(fni++))));
 $(p,/*verb*/fn(ix>>8?"f(%,k(%,0,x))":"F(%,k(%,a,x))",_2(rr,$i(p))))$(fi("'",a)&&nx==3,/*composition*/_x(fn("f(%,%(%(x)))",_3(rr,ct(x1),ct(x2)))))
 $(p=ad(a),/*adverb*/_x(fn("f(%,%(%,x))",_3(rr,p,ct(x1)))))$(p=v(a),/*projection*/_x(fn("f(%,k(%,%,x))",_3(rr,$i(p),eg(x1))))); r)
F(la,a=en(a);fn("f(%,%)",_2(ra,eg(x)));a)
f(eg,P(ax&&ix>='0'&&ix<='9',pc("ti(%)",x))P(ax,pc("r_(%)",x))Ua=x0;P(aa&&(i0)ia==':'&&ia>>8,A(nx==3);_x(la(x1,x2)))P(aa&&ia=='[',pc("(%)",cj(each(eg,one_(x)))))
 $(na==2,P(nx==2,_x(pc("%(%,%)",_3(ad(at(ra,0)),ct(at(a,1)),eg(x1)))))
         P(nx==3,_x(fi("\\",at(ra,0))?pc("niters(%,%,%)",_3(ct(at(a,1)),x1,eg(x2))):(p1(pc("no dyadic %",at(a,0))),0)))
   )P(train(ra),U t=_2(ct(a),eg(x1));_x(nx==2?pc("%(%)",t):pc("%(%,%)",cat(t,en(eg(x2))))))0)
int system(char*);f(dl,//pass a parse tree, get back its evaluation
 FILE*g=fopen("h.c","w");U e=eg(x);pf(g,pc("#include\"c.h\"\n%\nU d(){return %;}\n",_2(fns,e)));fclose(g);system("rm -f h.so;make h.so>/dev/null 2>&1");
 static void*l;$(l,dlclose(l));l=dlopen("./h.so",RTLD_NOW);$(!l,printf("%s\n",dlerror()));U(*d)()=dlsym(l,"d");d())
_Z(ini,k_();i(256,c[i]=' ')i(3,sd=mi[i+1];W(*d)c[*d++]=mi[0][i]);pt())int main(int n,i0**v){Z0 b[80];ini();W(fgets(b,80,stdin)){fn0();print(dl(parse(b)));}}
