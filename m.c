#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#include<unistd.h>
#include<fcntl.h>
#include<sys/mman.h>
#ifndef MAP_NORESERVE
 #define MAP_NORESERVE 0
#endif
S ST{V*p;Ln;UC f;}reg[128];S UC nreg,npnd,pnd[LEN(reg)];
S V mc(){I(npnd,i(npnd,Ij=pnd[i];munmap(reg[j].p,reg[j].n);Q(reg[j].f);reg[j].p=0)npnd=0;Ij=0;i(nreg,I(reg[i].p,Mc(reg+j,reg+i,SZ*reg);j++))nreg=j)}
S A mu(V*p)_(i(nreg,P(reg[i].p==p,pnd[npnd++]=i;0))die("UNMAP"))
S V*mm(Nn,If)_(V*p=mmap(0,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|MAP_ANON,-1,0);P((L)p<pg,(V*)0)I(nreg==LEN(reg),mc();I(nreg==LEN(reg),die("MMAP")))reg[nreg++]=(TY(*reg)){p,n,f};p)
S A mx(Nn)_(V*p=mm(n,0);P(!p,die("OOM"))(A)(p+HD))
A mf(If,Nn)_(V*p=mm(pg+n,1);P(!p,eo0())Ax=(A)(p+pg);xn=n;AT(tC,x);P(mmap(p+pg,n,PROT_READ|PROT_WRITE,MAP_NORESERVE|MAP_PRIVATE|MAP_FIXED,f,0)!=p+pg,mu(p);eo0())xR)

S Az[SZ(N)==4?27:35];DBG(S I lck;)
S A mb(Cb,Ax)_(xX=0;xr=0;DBG(AN(-1,AT(0,x));*xL=0);xU=b;x)V mrn(Nn,OA*a){i(n,mr(a[i]))}V mRn(Nn,OA*a){i(n,_R(a[i]))}A1(mRa,mRn(xn,xA);x)
A1(m0,DBG(lck++);Q(x);XP(0)Q(xr>0);P(--xr,0)Cb=xU;P(!b,mu(xV-pg))xX=z[b];z[b]=(A)xV;XR(mrn(xn|!xn,xA);x)x)
DBG(A1(m1,lck--;P(!x||!xU,0)Ms(xV,0xab,xZ);AN(-1,AT(0,x));0))
A an(Nn,Ct)_(Q(!lck);Q(LH(tA,t,tn-1));Q(!TP(t));Cb=59-__builtin_clzll(HD|HD-1+n*TW[t]);P(n>1ull<<LEN(z)||b>LEN(z)-2,die("OOM"))
 Ax=z[b];Ii=b;W(!z[i],i++)I(i<LEN(z)-1,x=z[i];z[i]=xX)E(x=mb(b,mx(HD<<(i=max(b,24)))))I(b<i,xU=b;W(b<i--,z[i]=mb(i,(A)x+(HD<<i))))xr=1;AT(t,AN(n,x)))
A1(mr,DBG(m1)(m0(x)))A aV(Ct,Nn,OV*v)_(Ax=an(n,t);Mc(xV,v,n*TW[t]);x)A a2t(Ax,Ay,Ct/*11t*/)_(Az=an(2,t);zx=x;zy=y;z)
A aA0(Nn)_(Ax=AN(0,aA(n));xx=oC;x)A1(aA1,Ay=an(1,tA);yx=x;y)A2(aA2,/*11*/a2t(x,y,tA))A3(aA3,/*111*/Au=an(3,tA);ux=x;uy=y;uz=z;u)
A2(aM,/*11*/a2t(x,y,tM))A2(am,/*11*/a2t(x,y,tm))AL(aA,an(n,tA))AL(aB,an(n,tB))AL(aC,an(n,tC))AL(aI,an(n,tI))AL(aL,an(n,tL))AL(aF,an(n,tF))AL(aS,an(n,tS))
A al(Lv)_(aV(tl,1,&v))A af(Fv)_(aV(tf,1,&v))A aCn(Qs,Nn)_(aV(tC,n,s))A aCm(Qp,Qq)_(aCn(p,q-p))AQ(aCz,aCn(s,Sn(s)))A1(mut,XP(x)P(xr==1,x)x=x(aV(xt,xn,xV));XR(mRa(x))x)
C tZ(Lv)_(v==(B)v?tB:v==(H)v?tH:v==(I)v?tI:tL)A kv(A*p)_(Ax=*p;Q(xn==2);P(xr>1,--xr;*p=_R(xx);_R(xy))*p=xx;AZ(x);x(xy))AL(az,n-(I)n?al(n):ai(n))
ALA(room,P(xr==1&&n*xW<=xZ,AN(n,x))Ay=an(n,xt);Mc(yV,xV,xn*xW);I(ytR,I(xr==1,AZ(x))E(i(xn,_R(ya))))x(y))L gl_(Ax)_(XP(xv)*xL)L gl(Ax)_(Lv=gl_(x);x(0);v)F gf(Ax)_(Fv=*xF;x(0);v)

S C s0[1<<16],*s1=s0+1;Q qs(O L*p)_(*p<0?s0-*p:(V*)p)
AQ(sym,Nn=Sn(s);P(n<4||(n==4&&!(s[3]&128)),Iv=0;Mc(&v,s,n);as(v))Qp=s0+1;W(p<s1,P(!strcmp(p,s),as(s0-p))p+=Sn(p)+1)n++;P(s1+n>s0+SZ s0,die("SYMS"))Mc(s1,s,n);s1+=n;as(s0-s1+n))

S AQ(cps,Ax=N(pk(s));cpl(str0(aCz(s)),x,oS))
S C*skp(C*s)_(W(!memcmp(s,"/\n",2),C*p=strstr(s+1,"\n\\\n");s=p?p+3:s+Sn(s))s)
S I ln(Qs)_(Ax=evs(s);mc();P(x,x(out(x));1)epr(0))
S A lns(C*p,Nn)_(Q(n)P(p[n-1]-10,err0("eoleof"))p[n-1]=0;I(!memcmp(p,"#!",2),p=strchrnul(p+2,10))C*v=p;W(p<v+n,C*q=p=skp(p);W(*q&&(*q-10||si(" }",q[1])<2),q++)*q=0;N(ln(p));p=q+1)au)
  AQ(bsl,Ax=N(u1c(aCz(s)));x(lns(xC,xn)))
S AQ(bs0,en0())
S AQ(bsbs,exit(0);0)
S AQ(bscd,P(!*s,Cb[256];getcwd(b,SZ b)?eo0():aCz(b))chdir(s)?eo0():au)
S AQ(bsd,P(!*s,aCz(gp))s+=*s=='.';Nn=Sn(s);P(n+2>SZ(gp),ez0())Mc(gp,s,n+1);au)
S AQ(bsf,K1("{`0:($!h),'\":\",'`k'. h:(&x=^`o`p`q`r`u`v`w`x?@'h)#h:``repl_.:0#`}",ai(!s)))
S AQ(bsL,Nm=SZ gp;C p[m],q[m+3];Mc(p,gp,m);Ax=N(bsd(s));Nn=Sn(gp);Mc(q,gp,n);Mc(q+n,".k",3);bsl(q);Mc(gp,p,m);x)
S AQ(bst,Ln=s[-1]=='t'&&*s==':'?++s,pl(&s):1,t=now();Ax=N(cps(s));i(n,mr(Nx(run(x,0,0))))x(az((now()-t+500)/1000)))
S AQ(bsv,bsf(0))
AQ(evs,P(*s-'\\',Ax=N(cps(s));x(run(x,0,0)))Cc=s[1],d=s[2];P(c=='c'&&d=='d'&&(!s[3]||s[3]==32),bscd(s+3+(s[3]==32)))
 P(!d||d==32||d==':',T(&bsL,bsl,bst,bsd,bsbs,bsf,bsv,bsm,bs0)[si("Lltd\\fvm",c)](s+2+(d==32)))K1("0x0a\\`x(,,\"/bin/sh\"),,:",aCz(s+1)))

C gp[32];I gn,gk[256];A gv[256],cns,ce[tn],cn[tn],ci[2][5];Q*argv,*env;
I rep()_(Cb[256],*s=b,*q;W(1,Ln=read(0,s,b-s+SZ b);P(n<0,0)s+=n;q=memchr(s-n,10,n);P(q,C*p=b;W(q,*q=0;ln(p);p=q+1;q=memchr(p,10,s-p))Mc(b,p,s-p);s+=b-p;1)P(b+SZ b<=s,die("LONGLINE")))1)
V repl(){W(rep())}L k(Qs)_(Ax=N(evs(s));mc();Xz(gl(x))x(0))V kf(Qs,L(*f)(L)){d8(A(sym(s),au,av,AT(tx,(A)f)),4);}
V kinit(){S I l;P(l)l=1;pg=sysconf(_SC_PAGESIZE);z[LEN(z)-1]=1;A b[32],*c=b;i(tS-tA+1,*c++=ce[tA+i]=an(0,tA+i))*c++=ce[tm]=am(oS,oA);_x(ce[tA])=oC;
 cn[tA]=ce[tC];*c++=cn[tB]=cn[tH]=cn[tI]=cn[tL]=cn[ti]=cn[tl]=al(NL);*c++=cn[tF]=cn[tf]=af(NF);cn[tC]=cn[tc]=ac(32);cn[tS]=cn[ts]=as(0);i(tn-to,cn[to+i]=au)
      ci[0][0]=ai(0);     ci[0][1]=ai(1);*c++=ci[0][2]=al(WL);*c++=ci[0][3]=al(-WL);ci[0][4]=cn[tL];
 *c++=ci[1][0]=af(0);*c++=ci[1][1]=af(1);*c++=ci[1][2]=af(WF);*c++=ci[1][3]=af(-WF);ci[1][4]=cn[tF];Q(c-b<=32);cns=aV(tA,c-b,b);}
V kargs(In,Q*a){argv=(Q*)a;env=(Q*)a+n+1;n=max(0,n-2);Ax=n?aA(n):oA;i(n,xa=aCz(a[2+i]))gk[gn]='x';gv[gn++]=x;}

A AT(UL t,Ax)_(Q(LH(0,t,tn));P(TP(t),x=Lt(t)|x<<8>>8)_t1(x)=t;x)A AV(UL v,Ax)_(Q(v<32);x&~31ll|v)A AW(C w,Ax)_(Q(w<6);xE=w;x)A AK(C k,Ax)_(Q(k<9);xk=k;x)
A AO(UC o,Ax)_(Xs(x&~(0xffll<<32)|(UL)o<<32)xB[-13]=o;x)A AN(Nn,Ax)_(Q(n<1ll<<48||n==-1);xL[-1]=n;x)A1(_R,Q(x);XP(x)Q(xr>=0);xr++;x)A1(AZ,AT(tB,x))

SN I ow(Qs,Nn)_(write(1,s,n))SN V o8(Lv){Cb[16],*s=b;i(16,Cc=v>>4*(15-i)&15;*s++="0W"[9<c]+c)ow(b,16);}I os(Qs)_(ow(s,Sn(s)))L ov_(Qs,Lv)_(os(s);o8(v);ow("\n",1);v)
#define mms(a...) i(nreg,If=reg[i].f;V*p=reg[i].p,*q=f?p:p+reg[i].n;a)
#define obs(a...) mms(Ax=(A)(p+HD*!f+pg*f),y=(A)q;W(x<y,a;x+=xZ+HD))
#define xys(a...) obs(I(xtR&&xr,i(xn|!xn,Ay=xa;a)))
#define rts(a...) {i(gn,Ax=gv[i];I(x,a))Ax=cns;a;}
SN V od(Lv){Cb[32];ow(b,sl(b,v)-b);}
SN V osd(Qs,Lv){os(s);od(v);}
SN A1(ox,o8(x);osd(" U",xU);Ct=_t1(x);os(" t");I(LH(1,t,tn),ow(&TS[t],1))E(od(t))osd(" r",xr);osd("=",xm);osd(" n",xn);i(min(5,xZ/8),os(" ");o8(xl))os("\n");x)
AQ(bsm,obs(xm=0)xys(I(!ytP,_m(y)++))rts(I(!xtP,xm++))
// In=0;obs(ox(x);n++);osd("nObjs:",n)
// os("mapped regions:\n");mms(os(f?"[f] ":"[x] ");o8((L)p);os("-");o8((L)q);osd(" N",q-p);os("\n"));os("\n");
 obs(I(!LH(tA,xt,tn-1)&&xr,os("!type:");ox(x)))
 obs(I(xr-xm,os("!refc:");ox(x)))
 xys(I(!yt,os("!dngl:");ox(x);ox(y)))au)
