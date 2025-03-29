#include"c.h"
#include"P.h"
#include<dlfcn.h>
#undef t
U strlen(const char*);int system(char*);
/*str2ints*/_U(p_,in=strlen(s);Ur=tn(2,n);i2*p=sr;i(n,p[i]=*s++);r,ss)f($i,Z0 b[8];int n=sprintf(b,"%d",ix);A(n<8);p_(b))
/*print*/_Z(pf,A(tx==2);i2*p=sx;i(nx,fputc((i0)p[i],f);$(p[i]>>8,fputc(':',f));)_x(fflush(f)),FILE*f,Ux)_Z(p1,$(ax,x=en(x));$(tx!=2,print(x);xx());pf(stdout,x),Ux)
/*match*/F(mat,P(a==x,ti(1))in=1;$(ta-tx|(ax?ix-ia:na-nx),n=0);ii=0;W(n&&!ax&&i<nx){U m=mat(at(ra,i),at(rx,i));n=x(m,ix);i++;}_r(a);_x(ti(n)))
/*template*/_U(pc,P(ax||tx,pc(s,en(x)))Ur=tn(2,0);ii=0;h(strlen(s),r=cat(r,s[h]=='%'?at(rx,i++):ti(s[h])));A(nx==i);_x(r),ss,Ux)
/*assert match*/F(Amat,Ur=mat(ra,rx);$(!x(r,ix),p1(pc("~%~%\n",_2(ra,rx)));xx());_r(a);_x(r))
/*parse*/Z0*mi[]={"av;","['/\\",Ps,";)]\n "},c[256];_U(fi,P(!ax,_x(0));sd=s-1;W(*++d)P(*d==ix,ti(d-s));0,ss,Ux)f(v,ax?fi(mi[2],ti((i0)ix)):0)
static i2 i,*sb,ns;_D(i2,mo,i<ns-1&&v(sb[i])&&sb[i+1]==':')_D(i2,verb,P(ax,v(x))P(!nx,0)Ua=at(x,0);_a(aa&&c[(i0)ia]=='a'),Ux)
_D(i2,train,P(verb(rx),_x(1))Ua=0;!ax&&nx==3?_x(_a((a=at(rx,0))==ti('\''))||_a((a=at(rx,2))&&na==0)):0,Ux)
_U(o3,P(train(r_(z)),_3(ti('\''),_3(x,y,el),z))_3(x,y,z),Ux,U y,U z)f(monad,ax&&c[(i0)ix]=='v'?ti(1<<8|ix):x)F(o2,train(rx)?_3(ti('\''),monad(a),x):_2(a,x))
_D(i2,s,P(i>=ns,' ')sb[i]|mo()<<8,ii)ZU t(),e(U);_U(n,ti(r(s(i),i+=1+mo())))_D(i2,q,';'==c[(i0)s(i)])f(E,W(fi(";[(",n()))x=cat(x,en(e(t())));x)
_D(i2,av,';'<c[(i0)s(i-1)])f(e,P(q(),x)i2 v=av();U f=t();av()>v?o3(f,x,e(t())):o2(x,e(f)))
_U(t,P(q(),el)Ux='('!=s(i)?n():(x=E(ti(s(i))),3>nx)?at(x,1):x;W('a'==c[(i0)s(i)])x='['==s(i)?E(x):_2(n(),x);x)
_U(parse,Ux=cat(ti('('),p_(s));sb=sx;ns=nx;i=0;_x(t()),ss)
/*parse test*/Z0*pts[][2]={{"","()"},{"0","0"},{"1+2","(+12)"},{"+/x","((/+)x)"},{"x[*i]'y","(('(x(*i)))y)"},{"!:'x","(('!:)x)"},{"1+2-","('(+1())(-2()))"},
	{"+-","('+:-)"},{"(+/|:)/x","((/('(/+)|:))x)"},{0}};
f(t2s,A(!tx|tx==2);P(ax,ix>>8?cat(ti((i0)ix),ti(':')):en(x))Ur=ti('(');i(nx,r=cat(r,t2s(at(rx,i))))r=cat(r,ti(')'));_x(r))
_Z(pt,Ux=mat(ti(1),ti(2));A(!ix);i2 i=0;W(*pts[i])(Amat(t2s(parse(*pts[i])),p_(pts[i][1])),i++))
/*gen*/Z0*ed[4]={"\\/'","scan","over","each"};f(ad,U r=fi(*ed,x);r?p_(ed[x(r,ix)+1]):0)
ZU fns,fms;_Z(fn0,$(fns,_r(fns);_r(fms));fns=el;fms=el)ZU eg(Ux);
f(tra,Ua=ax||nx<1?0:at(rx,0);U p=ax&&v(x);Ur=pc("t%",en($i(ti(x(fns,nx)))));fms=cat(fms,en(rr));
	//p1(t2s(rx));
	$(p,U u=_2(rr,$i(p));fns=cat(fns,en(pc(ix>>8?"f(%,k(%,0,x))":"F(%,k(%,a,x))",u))))
	 $(a&&aa,$(fi("'",a),fns=cat(fns,en(pc("f(%,%(%(x)))",_3(rr,tra(at(rx,1)),tra(at(x,2)))))))//composition
		  $(p=ad(a),fns=cat(fns,en(pc("f(%,%(%,x))",_3(rr,p,tra(at(x,1)))))))//adverb
	           $(p=v(a),A(nx==3);fns=cat(fns,en(pc("f(%,k(%,%,x))",_3(rr,$i(p),eg(at(x,1)))))));//projection
	  );
	r)
f(eg,P(ax&&ix>='0'&&ix<='9',pc("ti(%)",x));
     $(ax,p1(x);A(0));A(!ax&&nx);Ua=at(rx,0);U p=aa?v(ra):0;
     P(p,_r(a);U t=_2($i(p),eg(at(rx,1)));nx==2?_x(pc("k(%,0,%)",t)):pc("k(%,%,%)",cat(t,en(eg(at(x,2))))))
     $(na==2,P(nx==2,pc("%(%,%)",_3(ad(at(ra,0)),tra(at(a,1)),eg(at(x,1)))))
	     P(nx==3,fi("\\",at(ra,0))?pc("niters(%,%,%)",_3(tra(at(a,1)),at(rx,1),eg(at(x,2)))):(p1(pc("no dyadic %",en(at(a,0)))),_r(x),0))
     );0)
_U(fs,Ux=fns;Ua=fms;Ur=p_("");i(nx,r=cat(r,at(rx,i)));r)
f(dl,//pass a parse tree, get back its evaluation
 FILE*g=fopen("h.c","w");U r=eg(x);pf(g,pc("#include\"c.h\"\n%\nU d(){return %;}\n",_2(fs(),r)));fclose(g);system("rm -f h.so;make h.so>/dev/null 2>&1");
 static void*l;$(l,dlclose(l));l=dlopen("./h.so",RTLD_NOW);$(!l,printf("%s\n",dlerror()));U(*d)()=dlsym(l,"d");d())
_Z(ini,k_();i(256,c[i]=' ')i(3,sd=mi[i+1];W(*d)c[*d++]=mi[0][i]);pt())int main(int n,i0**v){Z0 b[80];ini();W(fgets(b,80,stdin)){fn0();print(dl(parse(b)));}}
