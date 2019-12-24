// ngn/k, (c) 2019 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
//#define DEBUG
#include<sys/syscall.h>
#include<math.h>
#include"g.h"
#define     _(a...) {R({a;});}
#define   $(x,a...) if(x){a;}
#define   P(x,a...) $(x,_(a))
#define     E(a...) else{a;}
#define  E$(x,a...) else if(x){a;}
#define Y(x,y,a...) switch(x){default:{y;B;}a}
#define   Q(x,a...) case x:{a;B;}
#define   W(x,a...) while(x){a;}
#define   F(x,a...) for(L n_=(x),i=0;i<n_;i++){a;}
#define  Fj(x,a...) for(L n_=(x),j=0;j<n_;j++){a;}
#define B break
#define O const
#define R return
#define S static
#define NI __attribute__((noinline))
#define SI S inline
#define SN S NI
#define XT extern
#define TD typedef
#define UR __builtin_unreachable();
#define cold __attribute__((cold))
#define mstr(x) #x
#define xstr(x) mstr(x)
#define N(r)      ({A r_=(r);P(!r_,            0);r_;})
#define N1(x,r)   ({A r_=(r);P(!r_,mr(x);      0);r_;})
#define N2(x,y,r) ({A r_=(r);P(!r_,mr(x);mr(y);0);r_;})
#define swp(x,y) {__typeof__(x)tmp=x;x=y;y=tmp;}
#ifdef DEBUG
 #define dbg(x) x
 #define die(x) {write(1,x,sizeof(x));exit(1);}
 #define asrt(x) $(!(x),die(__FILE__":"xstr(__LINE__)": "xstr(x)))
#else
 #define dbg(x)
 #ifdef __clang__
  #define asrt(x) __builtin_assume(x)
 #else
  #define asrt(x)
 #endif
#endif

TD char C;TD unsigned char UC;TD short H;TD unsigned short UH;TD int I;TD unsigned int UI;TD long long L;TD unsigned long long UL;TD double D;
TD void V;TD L A;TD A A0(),A1(A),A2(A,A),A3(A,A,A),AA(O A*,UC),AX(A,O A*,UC);
#define V(x) ((V*)((UL)(x)<<16>>16))
#define C(x) ((C*)V(x))
#define H(x) ((H*)V(x))
#define I(x) ((I*)V(x))
#define L(x) ((L*)V(x))
#define D(x) ((D*)V(x))
#define A(x) ((A*)V(x))
#define A_(a...) (A[]){a}
#define A0(f,b...) A f()              _(b)
#define A1(f,b...) A f(A x)           _(b)
#define A2(f,b...) A f(A x,A y)       _(b)
#define A3(f,b...) A f(A x,A y,A z)   _(b)
#define AA(f,b...) A f(O A*a,UC n)    _(b)
#define AX(f,b...) A f(A x,O A*a,UC n)_(b)

#define sc(f,a...  ) ({L r;asm volatile("syscall":"=a"(r):"0"(SYS_##f)a:"cc","rcx","r11","memory");r;})
#define sc1(f,x    ) sc(f,,"D"(x)              )
#define sc2(f,x,y  ) sc(f,,"D"(x),"S"(y)       )
#define sc3(f,x,y,z) sc(f,,"D"(x),"S"(y),"d"(z))
#define   read(a...) sc3(        read,a)
#define  write(a...) sc3(       write,a)
#define   open(a...) sc3(        open,a)
#define  close(a...) sc1(       close,a)
#define  fstat(a...) sc2(       fstat,a)
#define   dup2(a...) sc2(        dup2,a)
#define execve(a...) sc3(      execve,a)
#define  pipe2(a...) sc2(       pipe2,a)
#define munmap(a...) sc2(      munmap,a)
#define    skt(a...) sc3(      socket,a)
#define   conn(a...) sc3(     connect,a)
#define   gtod(a...) sc2(gettimeofday,a)
#define   exit(a...){sc1(        exit,a);UR;}
#define fork() sc(fork)
#define mmap_(x,y,z,t,u,v) ({register L r10 asm("r10")=t,r8 asm("r8")=u,r9 asm("r9")=v;(V*)sc(mmap,,"D"(x),"S"(y),"d"(z),"r"(r10),"r"(r8),"r"(r9));})

#define extr(x,y,c)({__typeof__(x) x1=(x),y1=(y);x1 c y1?x1:y1;})
#define min(x,y)extr(x,y,<)
#define max(x,y)extr(x,y,>)
SI L d2l(D v)_(*(L*)(V*)&v)SI L llabs(L x)_(x<0?-x:x)SI I C3(UC x,UC y,UC z)_(x<=y&&y<=z)
SI D l2d(L v)_(*(D*)(V*)&v)SI C hex(I x)_(x+(x>9?'a'-10:'0'))

//   () "" ,0 ,l ,` ,d +!  ! 0W  0.  "a" 0 0j `  {} 1+ ++ +/ +: +  /
enum{tX,tC,tI,tL,tS,tD,tA,ta,tlx,tdx,tc,ti,tl,ts,to,tp,tq,tr,tu,tv,tw,tn};
//tttttttt........xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000 tX,tC,tI,tL,tD,tS,tA,ta,tlx,tdx
//tttttttt................................................cccccccc tc
//tttttttt........................iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii ti
//tttttttt........................llllllllllllllllllllllllllllllll tl
//tttttttt........oooooooooooooooossssssssssssssssssssssssssssssss ts
//tttttttt.....kkkxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000 to,tp,tq
//tttttttt..vvvkkkxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000 tr
//ttttttttvvvvvkkk................................................ tu,tv,tw
//t:type,v:verb,k:arity,o:offset,x:ptr,cils:value
SI UC At(A x)_((UL)x>>56   )SI A AT(UC t,A x)_((A)((UL)t<<56|(UL)x<<8>>8))
SI UC Ak(A x)_((UL)x>>48&7 )SI A AK(UC k,A x)_(asrt(k< 8);asrt(xt<tu||tw<xt);(A)(((UL)x&~( 7ull<<48))|(UL)k<<48))
SI UC Av(A x)_((UL)x>>51&31)SI A AV(UC v,A x)_(asrt(v<32);asrt(xt<tu||tw<xt);(A)(((UL)x&~(31ull<<51))|(UL)v<<51))
SI UC Ab(A x)_(C(x)[-16]   )SI A AB(UC b,A x)_(C(x)[-16]=b;x) //hdr: b.oorrrrnnnnnnnn
SI UL An(A x)_(L(x)[-1 ]   )SI A AN(UL n,A x)_(asrt(n<1ull<<48);L(x)[-1 ]=n;x)
SI UH Ao(A x)_(xts?(UL)x>>32:xh[-7])SI A AO(UH o,A x)_(P(xts,(A)(((UL)x&~(0xffffull<<32)|(UL)o<<32)))H(x)[-7]=o;x)
#define Ar(x) I(x)[-3]
SI I reft(UC t)_(t==tX||t==ta||t==tA||t==to||t==tp||t==tq||t==tr)SI I ref(A x)_(reft(xt))SI I pkd(A x)_(xtc||xti||xt==tl||xts||xtu||xtv||xtw)
SI I sim(A x)_(ta<xt&&xt<to)SI I fun(A x)_(to<=xt)SI UC t_lst(UC t)_(t==tlx?tL:t==tdx?tD:t>=tc&&t<to?t+tC-tc:t)SI UC t_nrm(UC t)_(t==tl?tlx:t)

#define Z sizeof
#define ZZ(x) (Z(x)/Z(*(x)))
#define ZV Z(V*)
#define ZL Z(L)
#define ZA 16
#define ZR 67 //ref
SI UC tz(UC t)_(t==tC?0:t==tI?2:reft(t)?ZR:3)
SI UC tZ(UC t)_(t==tC?1:t==tI?4:reft(t)?ZV:8)

A1 a1,asc,ax,blw,cmd,cpl,dsc,enl,enla,fir,flp,flr,gD,gI,gL,grp,hcl,hop,json,las,ldf,len,mr,mRa,mut,neg,not,nul,out,prs,rev,sqr,sys,sqz,str,str0,til,
   typ,u0c,u1c,unq,val,whr;
A2 a2,aa,aA,add,ap1,ap2,apd,cat,com,cst,cut,dex,dvd,eql,fnd,id_,gtn,idx,ltn,mnm,mod,mtc,mul,mxm,rsh,sub,kst,v0c,v1c,xpt;
A0 aa0;A3 a3,try;AA amd,dmd,dm1;AX eac,rdc,scn,eap,ear,eal,app,prj,run;XT A syml,glb;XT L mu;
A err0(O C*),err1(O C*,A),err2(O C*,A,A),err3(O C*,A,A,A),errn(O C*,I,O A*),ea1(A1,A),apv(A,O V*),apc(A,C),catc(A,O C*,L),room(A,L),
  get(A,L),getr(A,L),atn(UC,L),atnv(UC,L,O V*),aCn(O C*,L),aCm(O C*,O C*),aCz(O C*),gkv(A*),pS(C**);
V mrn(L,O A*),*mc(V*,O V*,L),mz(V*,L);I memcmp(O V*,O V*,L),sym(A),ecl(),epr(),eso(A,L);
L strlen(O C*),len_(A),fndl(A,L),fndpc(A*,C),fndpi(A*,I),fndpl(A*,L),fndpa(A*,A),mtc_(A,A),tru(A),time(),pl(C**),slc_(A,L,L),pu(C**);

SI A1(mR,asrt(x);P(pkd(x),x)asrt(Ar(x)>=0);Ar(x)++;x)SI A symstr(L i)_(A(syml)[i])
#define atv(t,v) ({A r_=atn((t),1);*(typeof(v)*)V(r_)=(v);r_;})
SI A aX(L n)_(atn(tX,n))SI A pck(UL t,UI v)_(t<<56|v)SI A0(a0,aX(0))
SI A aC(L n)_(atn(tC,n))SI A ac(UC v)_(pck(tc,v))SI UC gc(A x)_(asrt(xtc);(UC)x)
SI A aS(L n)_(atn(tS,n))SI A as(I v)_(pck(ts,v))SI I gs(A x)_(asrt(xts);(I)x)
SI A aI(L n)_(atn(tI,n))SI A ai(I v)_(pck(ti,v))SI I gi(A x)_(asrt(xti);(I)x)
SI A aL(L n)_(atn(tL,n))SI A al(L v)_(v==(I)v?pck(tl,v):atv(tlx,v))SI L gl(A x)_(pkd(x)?(I)x:(xr,*xl))SI L gl_(A x)_(pkd(x)?(I)x:*xl)
SI A aD(L n)_(atn(tD,n))SI A ad(D v)_(atv(tdx,v))SI D  gd(A x)_(D v=*xd;xr;v)SI D gd_(A x)_(*xd)

#define err_(x,y,z,u,n,...) n
#define err(a...) ({dbg(ps("["__FILE__":"xstr(__LINE__)"]"));err_(a,err3,err2,err1,err0)(a);})
#define en(a...) err((C*)0,##a)
#define el(a...) err((C*)1,##a)
#define et(a...) err((C*)2,##a)
#define ed(a...) err((C*)3,##a)
#define er(a...) err((C*)4,##a)
#define ei(a...) err((C*)5,##a)
#define ep(a...) err((C*)6,##a)
#define h(t,i) SI A e##t##n(I n,O A*a)_(errn((C*)i,n,a))
h(n,0)h(l,1)h(t,2)h(d,3)h(r,4)h(i,5)h(p,6)
#undef h

#define tvk(t,v,k) ((A)((UL)(t)<<56|(UL)(v)<<51|(UL)(k)<<48))
#define cu(i) tvk(tu,i,1)
#define cv(i) tvk(tv,i,2)
#define cw(i) tvk(tw,i,1)
#define vi(c) (c==':'?0:c=='+'?1:c=='-'?2:c=='*'?3:c=='%'?4:c=='!'?5:c=='&'?6:c=='|'?7:c=='<'?8:c=='>'?9:c=='='?10:c=='~'?11:c==','?12:\
 c=='^'?13:c=='#'?14:c=='_'?15:c=='$'?16:c=='?'?17:c=='@'?18:c=='.'?19:-1)
#define cU(c) cu(vi(c))
#define cV(c) cv(vi(c))
S O A cu0=cu(0),cv0=cv(0),cu_cmd=cu(31),cv_plc=cv(29),cv_mkl=cv(30),cv_com=cv(31);
#define _0N  (1ull<<63)
#define _0W  (~_0N)
#define _0Ni (1<<31)
#define _0Wi (~_0Ni)
#define _0n  (D)NAN
#define _0w  (D)INFINITY
#define K(s,a...) ({S A f;$(!f,L m=mu;f=val(aCn(s,Z(s)+1));mu=m);app(f,A_(a),Z(A_(a))/ZV);})
XT O C vc[];XT O L cil[11];XT O D cid[];XT A cn[];XT O V*cf[];SI L ari(A x)_(xtv&&Av(x)<ZZ(cil))

#define arI(f,n,p)Y(f,UR,Q(0,F(n,p ((V)a,b)))Q(1,F(n,p a+b))Q(2,F(n,p a-b))Q(3,F(n,p a*b))Q(4,F(n,p b?a/b:!a?_0Ni:a>0?_0Wi:-_0Wi))\
 Q(5,F(n,p a>0?(b%a+a)%a:a?b/-a:_0Ni))Q(6,F(n,p min(a,b)))Q(7,F(n,p max(a,b)))Q(8,F(n,p a<b))Q(9,F(n,p a>b))Q(10,F(n,p a==b)))
#define arL(f,n,p)Y(f,UR,Q(0,F(n,p ((V)a,b)))Q(1,F(n,p a+b))Q(2,F(n,p a-b))Q(3,F(n,p a*b))Q(4,F(n,p b?a/b:!a?_0N:a>0?_0W:-_0W))\
 Q(5,F(n,p a>0?(b%a+a)%a:a?b/-a:_0N))Q(6,F(n,p min(a,b)))Q(7,F(n,p max(a,b)))Q(8,F(n,p a<b))Q(9,F(n,p a>b))Q(10,F(n,p a==b)))
#define arD(f,n,p)Y(f,UR,Q(0,F(n,p ((V)a,b)))Q(1,F(n,p a+b))Q(2,F(n,p a-b))Q(3,F(n,p a*b))Q(4,F(n,p b?a/b:!a?_0n:a>0?_0w:-_0w))\
 Q(5,F(n,p((V)a,(V)b,_0n)))Q(6,F(n,p min(a,b)))Q(7,F(n,p max(a,b)))Q(8,F(n,p l2d(a<b)))Q(9,F(n,p l2d(a>b)))Q(10,F(n,p l2d(a==b))))

#define pv(x) pv_(#x,(L)(x))
#define pp ps("["__FILE__":"xstr(__LINE__)"]");
#define nop {asm volatile("fnop");}
SI I ps(O C*x)_(write(2,x,strlen(x)))
SI I ph(L x)_(C s[17];s[16]=0;F(16,s[15-i]=hex(x&15);x>>=4)write(2,s,17))
SI I pd(L x)_(C b[32],*u=b+31;L m=x<0;$(m,x=-x)do{*u--='0'+x%10;x/=10;}while(x);$(m,*u--='-')write(2,u+1,b+31-u))
SI L pv_(C*s,L x)_(ps(s);write(2,"           ",max(1,10-strlen(s)));ph((L)x);write(2,"\n",1);x)
SI A pa_(C*s,A x)_(ps(s);ph((L)x);P(!x,0)$(!pkd(x),ps(" b");pd(xb);ps("t");pd(xt);ps("r");pd(Ar(x));ps("n");pd(xn))ps(" ");out(x))
