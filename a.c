#include"k.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
A1(neg,sub(ai(0),x))A1(not,xtaAX?ea1(not,x):fun(x)?mtc(x,au0):eql(x,xtsS?as(0):ac(0)))
A1(sqr,P(xtaAX,ea1(sqr,x))x=N(gD(x));A u=Ar(x)-1?atn(xt,xn):x;F(un,udi=__builtin_sqrt(xdi))Y(xc-uc,xr)u)
A1(nul,xtaAX?ea1(nul,x):eql(x,mR(cn[xt])))S C lwc(C c)_(c+32*c3('A',c,'Z'))S L fl1(D d)_(d<0?(L)d-(d<(L)d):(L)d)
A1(flr,P(xtlL||xtiI,x)P(xtc,ac(lwc(gc(x))))P(xtC,A u=aC(xn);mr2(x,F(un,uci=lwc(xci))u))P(xtaAX,ea1(flr,x))
 x=N(gD(x));A u=atn(xtd?tl:tL,xn);F(un,uli=fl1(xdi))xr;u)

S I i0(I x,I y)_(y)                         S L l0(I x,I y)_(y)                         S D d0(I x,I y)_(y)                //:
S I i1(I x,I y)_(x+y)                       S L l1(L x,L y)_(x+y)                       S D d1(D x,D y)_(x+y)              //+
S I i2(I x,I y)_(x-y)                       S L l2(L x,L y)_(x-y)                       S D d2(D x,D y)_(x-y)              //-
S I i3(I x,I y)_(x*y)                       S L l3(L x,L y)_(x*y)                       S D d3(D x,D y)_(x*y)              //*
S I i4(I x,I y)_(y?x/y:(UI)_0Ni+(x<0)-(x>0))S L l4(L x,L y)_(y?x/y:(UL)_0Nl+(x<0)-(x>0))S D d4(D x,D y)_(x/y)              //%
S I i5(I x,I y)_(x>0?(y%x+x)%x:x?y/-x:_0Ni) S L l5(L x,L y)_(x>0?(y%x+x)%x:x?y/-x:_0Nl) S D d5(D x,D y)_(_0n)              //!
S I i6(I x,I y)_(min(x,y))                  S L l6(L x,L y)_(min(x,y))                  S D d6(D x,D y)_(min(x,y))         //&
S I i7(I x,I y)_(max(x,y))                  S L l7(L x,L y)_(max(x,y))                  S D d7(D x,D y)_(max(x,y))         //|
S L cmpd(D x)_(L a=*(L*)&x;a^((UL)(a>>63)>>1))
S I i8(I x,I y)_(x<y)                       S I l8(L x,L y)_(x<y)                       S I d8(D x,D y)_(cmpd(x)<cmpd(y))  //<
S I i9(I x,I y)_(x>y)                       S I l9(L x,L y)_(x>y)                       S I d9(D x,D y)_(cmpd(x)>cmpd(y))  //>
S I iX(I x,I y)_(x==y)                      S I lX(L x,L y)_(x==y)                      S I dX(D x,D y)_(*(L*)&x==*(L*)&y) //=

#define hf(x,t,rt,c)SN V x(t*a,t*b,rt*r,L n)c
#define ha(x,xiI,xIi,xII,xlL,xLl,xLL,xdD,xDd,xDD,rl,rd)\
 hf(iI##x,I,I ,xiI)hf(Ii##x,I,I ,xIi)hf(II##x,I,I ,xII)\
 hf(lL##x,L,rl,xlL)hf(Ll##x,L,rl,xLl)hf(LL##x,L,rl,xLL)\
 hf(dD##x,D,rd,xdD)hf(Dd##x,D,rd,xDd)hf(DD##x,D,rd,xDD)
#define htT(f){__typeof__(*a)c=*a;F(n,r[i]=f(c,b[i]))}
#define hTt(f){__typeof__(*b)c=*b;F(n,r[i]=f(a[i],c))}
#define hTT(f){F(n,r[i]=f(a[i],b[i]))}
#define hs(x){x(b,a,r,n);}
#define hn(x){__typeof__(*b)c=-*b;x(a,&c,r,n);}
//   iI      Ii      II      lL      Ll      LL      dD      Dd      DD
ha(0,htT(i0),hTt(i0),hTT(i0),htT(l0),hTt(l0),hTT(l0),htT(d0),hTt(d0),hTT(d0),L,D)
ha(1,htT(i1),hs(iI1),hTT(i1),htT(l1),hs(lL1),hTT(l1),htT(d1),hs(dD1),hTT(d1),L,D)
ha(2,htT(i2),hn(Ii1),hTT(i2),htT(l2),hn(Ll1),hTT(l2),htT(d2),hn(Dd1),hTT(d2),L,D)
ha(3,htT(i3),hs(iI3),hTT(i3),htT(l3),hs(lL3),hTT(l3),htT(d3),hs(dD3),hTT(d3),L,D)
ha(4,htT(i4),hTt(i4),hTT(i4),htT(l4),hTt(l4),hTT(l4),htT(d4),hTt(d4),hTT(d4),L,D)
ha(5,htT(i5),hTt(i5),hTT(i5),htT(l5),hTt(l5),hTT(l5),htT(d5),hTt(d5),hTT(d5),L,D)
ha(6,htT(i6),hs(iI6),hTT(i6),htT(l6),hs(lL6),hTT(l6),htT(d6),hs(dD6),hTT(d6),L,D)
ha(7,htT(i7),hs(iI7),hTT(i7),htT(l7),hs(lL7),hTT(l7),htT(d7),hs(dD7),hTT(d7),L,D)
ha(8,htT(i8),hTt(i8),hTT(i8),htT(l8),hTt(l8),hTT(l8),htT(d8),hTt(d8),hTT(d8),L,I)
ha(9,hs(Ii8),hs(iI8),hs(II8),hs(Ll8),hs(lL8),hs(LL8),hs(Dd8),hs(dD8),hs(DD8),L,I)
ha(X,htT(iX),hs(iIX),hTT(iX),htT(lX),hs(lLX),hTT(lX),htT(dX),hs(dDX),hTT(dX),L,I)
#undef hn
#undef hs
#undef hTT
#undef hTt
#undef htT
#undef ha
#undef hf

#define ht(v,t,T) S T T##v##rdc(T a,T*b,L n)_(F(n,a=t##v(a,b[i]))a)\
                  S V T##v##scn(T a,T*b,T*r,L n)_(F(n,r[i]=a=t##v(a,b[i])))\
                  S V T##v##eap(T a,T*b,T*r,L n)_(F(n,T c=b[i];r[i]=t##v(b[i],a);a=c))\
                  S I T##v##amd(T*a,L n,L*p,L m,T*b,I d)_(F(m,L j=p[i];P(j<0||j>=n,0)a[j]=t##v(a[j],b[d*i]))1)
#define h(v) ht(v,i,I)ht(v,l,L)ht(v,d,D)
h(0)h(1)h(2)h(3)h(4)h(5)h(6)h(7)h(8)h(9)h(X)
#undef h
#undef ht

#define h(v,t,T){t##T##v,T##t##v,T##T##v,T##v##rdc,T##v##scn,T##v##eap,T##v##amd},
#define h1(a...){h(0,a)h(1,a)h(2,a)h(3,a)h(4,a)h(5,a)h(6,a)h(7,a)h(8,a)h(9,a)h(X,a)},
O V*arf[3][11][7]={h1(i,I)h1(l,L)h1(d,D)};
#undef h1
#undef h
S A pen2(A x,A y,I v)_(P(xta&&yta,A u=gkv(&y);am1(A_(x,y,av(v),u),4))P(xtaAX||ytaAX,eac(av(v),A_(x,y),2))
 A1*g=xtdD||ytdD?gD:xtlL||ytlL?gL:gI;x=Ny(g(x));y=Nx(g(y));I k=xtT<<1|ytT;P(k==3&&xn-yn,el(x,y))
 V*a=xti?(V*)&x:xc,*b=yti?(V*)&y:yc;void(*f)(V*,V*,V*,L)=arf[xt-(xtt?ti:tI)][v][k-!!k];UC t=xtiI?tI:xtlL?tL:v<8?tD:tI;
 Y(!k,t+=ti-tI;P(t==ti,I r;f(a,b,&r,1);xr;yr;ai(r)))P(xt==t&&Ar(x)==1,mr2(y,f(a,b,xc,xn);x))P(yt==t&&Ar(y)==1,mr2(x,f(a,b,yc,yn);y))
 A u=atn(t,k-1?xn:yn);mr2(x,mr2(y,f(a,b,uc,un);u)))
A2(eql,xtsS&&ytsS?eql(AT(xt+ti-ts,x),AT(yt+ti-ts,y)):pen2(x,y,vi('=')))
A2(mod,P(xtl&&gl_(x)==_0Nl,out(dex(x,y)))P(xtil,pen2(x,y,vi('!')))
 Y(xtt||xta,Y(xta,x=enl(x))x=rsh(al(len_(y)),x))Y(ytt||yta,Y(yta,y=enl(y))y=rsh(al(len_(x)),y))len_(x)-len_(y)?el(x,y):aa(x,y))
#define h(c,s) A2(s,pen2(x,y,vi(c)))
h('+',add)h('-',sub)h('*',mul)h('%',dvd)h('&',mnm)h('|',mxm)h('<',ltn)h('>',gtn)
#undef h
