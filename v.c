#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/blob/master/LICENSE
#define h(T) SN V r##T(V*p,V*q)_(T*a=p,*b=q;LN(a)W(a<b,SWP(*a,*b);a++;b--))\
             SN V w##T(L*RE p,Nn,V*RE r)_(T*a=r;LN(p)LN(a)i(n,j(p[i],*a++=i)))
h(B)h(H)h(I)h(L)
#define c_(T,R,p) SN V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]))
#define cN(T,R,p) SN V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]==N##T?N##R:a[i]))
c_(C,H,r)c_(B,H,r)c_(H,C,a)c_(C,I,r)c_(B,I,r)c_(I,C,a)c_(I,B,a)c_(L,C,a)
c_(H,I,r)c_(I,H,a)c_(H,L,r)c_(L,H,a)c_(I,L,r)c_(L,I,a)cN(L,D,a)cN(D,L,a)
A1(flp,XM(Ay=kv(&x);am(x,y))
 Xm(Ay=kv(&x);P(!ytA,et2(x,y))Ln=cfm(yA,yn);P(n<0,el2(x,y))i(yn,Az=ya;I(ztt,y=mut(y);ya=rshN(n,z)))aM(x,y))
 Xt(enl(enl(x)))P(!xtA||!xn,enl(x))Ln=cfm(xA,xn);P(n==-1,enl(x))P(n<0,el1(x))
 Ct=_t(*xA);I(t<tM,i(xn,Ay=xa;B(yt-t,t=0)))E(t=0)Ay=aA(n);P(!t,i(n,Az=aA(xn);j(xn,zA[j]=get(xA[j],i))ya=sqz(z))x(y))
 I w=Tz[t];i(n,Az=ya=atn(t,xn);j(xn,Ay=xA[j];I(!w,zB[j]=yb)EI(w==1,zH[j]=yh)EI(w==2,zI[j]=yi)E(zL[j]=yl))
               I(w==4,ya=sqz(mRa(z))))x(y))
V tilV(V*p,Ln,I w){L*a=p,v=CH(w,0x706050403020100ll,0x3000200010000ll,1ll<<32,0),
 d=CH(w,0x808080808080808ll,0x4000400040004ll,2ll<<32|2,1);LN(a)i(PD((n-1>>3-w)+1,a),a[i]=v;v+=d)}
AL(tilL,P(n<0,n-NL?add(az(n),N(tilL(-n))):ed0())Ez(n>1<<30)Ax=atn(tZ(n-1),n);tilV(xV,n,xt-tB);x)
A1(til,Xz(tilL(gl(x)))XZ(K("{x((*a)#&#)'1_a:|*\\|x,1}",x))XmM(x(_R(xx)))Xo(val(x))Et(!xtA||xn,x)x)
A1(whr,Xt(XF(et1(x))whr(enl(x)))XA(K("{$[`A~@x;(,&#'*'x),,'/x@\\:!0|/#'x:o'x;,&x]}",x))
 Xm(Ay=kv(&x);idx(x,Nx(whr(y))))XM(et1(x))
 x=N(cL(x));Ln=0;i(xn,Ed(xl<0,x)n+=xl)Ct=tZ(xn-!!xn);Ez(t>tI,x)Ay=atn(t,n);x2(n=0;CH(t-tB,&wB,wH,wI)(xV,xn,yV);y))
A1(rev,XT(x=mut(x);CH(Tz[xt],&rB,rH,rI,rL,rL)(xV,xV+xW*(xn-1));x)
 Xm(Ay=kv(&x);am(rev(x),rev(y)))XM(Ay=kv(&x);aM(x,Nx(eac1(y,rev))))x)
A1(typ,x(as(TS[xt])))
A1(len,x(az(xN)))N _N(Ax/*0*/)_(xtT?xn:xtm?_N(xy):!xtM?1:_n(xy)?_N(*(A*)_V(xy)):1)
A1(unq,XT(xN<2?x:K("{x@i@<i@:&@[;0;:;1]@~~':x@i:<x}",x))Xz(rndD(gl(x)))et1(x))
A2(fil,YmMA(eac2(x,y,EXC))YF(y==au?x:x(y))Yt(fir(fil(x,enl(y))))K("{@[y;&^y;:;x]}",x,y))
A2(exc,Xt(fil(x,y))En(xtmM||ytmM,x,y)y=enla(y);P(!xn||!yn,y(x))
 Ik=rnk(x);k>0&&k==rnk(y)?K("{x@&^y?x}",x,y):K("{x@&~(!0),x~\\:y}/",x,y))
A wdn(Ax,Ni,Nj,Nn)_(Ct=xt;Q(xtZC);Ay=atn(t+1,n);x2(CH(t-tB,&cBH,cHI,cIL,cLD,0,cCH)(xV+TZ[t]*i,yV,j-i);y))
SN A cZ(Ax,Ct)_(P(xt==t,x)x=N(cI(x));Xt(t==tC?ac(xv):x)Ay=atn(t,xn);x2(CH(t-tB,&cIB,cIH,0,0,0,cIC)(xV,yV,yn);y))
A1(cC,cZ(x,tC))A1(cB,cZ(x,tB))A1(cH,cZ(x,tH))
A1(cI,XI(x)Xzc(ai(gl(x)))XdD(cI(N(cL(x))))XZC(Ay=aI(xn);Ii=xt-tB;x2(CH(i,&cBI,cHI,0,cLI,0,cCI)(xV,yV,yn);y))et1(x))
A1(cL,XlL(x)Xzc(al(gl(x)))Xt(fir(N(cL(enl(x)))))XD(Ay=aL(xn);x2(cDL(xV,yV,yn);y))x=N(cI(x));Ay=aL(xn);x2(cIL(xV,yV,yn);y))
A1(cD,XdD(x)Xzc(ad(gl(x)))Xt(fir(N(cD(enl(x)))))x=N(cL(x));Ay=aD(xn);x2(cLD(xV,yV,yn);y))
A1(cS,XsS(x)XC(x=str0(x);x(syP(xV)))Xc(as(xv))XmMA(eac1(x,cS))et1(x))
A1(pI,XmMA(eac1(x,pI))Xc(pI(enl(x)))XC(x=str0(x);Qs=xV;P(!*s,x(_R(cn[tl])))Lv=pl(&s);x(*s?_R(cn[tl]):az(v)))et1(x))
U(cT,{[tA]=blw,cB,cH,cI,cL,cD,cC,cS})
A2(cst,P(xtS||ytmMA,eac2(x,y,CST))P(xtz&&ytcC,K("{y@(!x)+(x<0)*#y}",x,enla(y)))
 Xs(Iv=xv;P(v-(C)v,ed1(y))CH(si("bhildcsI",v+'s'*!v),&cB,cH,cI,cL,cD,cC,cS,pI)(y))en2(x,y))
A1(sqz,P(!xtA||!xn,x)Nn=xn;Ay=xx;Ct=yt;Ym(y=oA;i(n,yq(_R(xa)))x(y))P(!c3(ti,t,ts),x)
 I(ytz,I l=0;i(n,Ay=xa;I(ytl,l=1)E(P(!yti,x)))
       I(l,t=tL)E(I a=0,b=0;i(n,Ay=xa;a=min(a,yv);b=max(b,yv))t=max(tZ(a),tZ(b))))
 E(i(n,P(t-_t(xa),x)))
 y=atn(TT[t],n);Iv=Tz[yt];I(v<3,CH(v,&cLC,cLH,cLI)(xV,yV,n))E(i(n,yl=gl_(xa)))x(y))
A1(blw,XA(x)Xt(a1(x))Et(xtm,x)Nn=xN;Ay=aA(n);i(yn,ya=get(x,i))x(y))
L tru(Ax/*1*/)_(Lv=xtF?x!=au:xtt?gl_(x):xN;x(0);v)
