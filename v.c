#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define c_(T,R,p) SN V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]))
#define cN(T,R,p) SN V c##T##R(OV*RE v,V*RE w,Nn)_(O T*RE a=v;R*RE r=w;i(PD(n,p),r[i]=a[i]==N##T?N##R:a[i]))
c_(B,H,r)c_(H,B,a)c_(B,I,r)c_(I,B,a)c_(L,B,a)c_(H,I,r)c_(I,H,a)c_(H,L,r)c_(L,H,a)c_(I,L,r)c_(L,I,a)cN(L,D,a)cN(D,L,a)
A1(flp,XM(Ay=kv(&x);am(x,y))
 Xm(Ay=kv(&x);I(ytT>ytA,y=flp(flp(y)))P(!ytA,et2(x,y))Ln=cfm(yA,yn);P(n<0,el2(x,y))i(yn,Az=ya;I(ztt,y=mut(y);ya=rsh(n,z)))aM(x,y))
 Xt(enl(enl(x)))P(!xtA||!xn,enl(x))Ln=cfm(xA,xn);P(n==-1,enl(x))P(n<0,el1(x))
 Ct=_t(*xA);I(t<tM,i(xn,Ay=xa;B(yt-t,t=0)))E(t=0)Ay=aA(n);P(!t,i(n,Az=aA(xn);j(xn,zA[j]=ii(xA[j],i))ya=sqz(z))x(y))
 I w=Tz[t];j(n,Az=yA[j]=an(t,xn);Y(w,case  0:i(xn,zb=_B(xa)[j])break;
                                     case  1:i(xn,zh=_H(xa)[j])break;
                                     case  2:i(xn,zi=_I(xa)[j])break;
                                     default:i(xn,zl=_L(xa)[j])I(w==4,yA[j]=sqz(mRa(z)))))x(y))
V tilV(V*p,Ln,I w){L*a=p,v=T(0x706050403020100ll,0x3000200010000ll,1ll<<32,0)[w],
 d=T(0x808080808080808ll,0x4000400040004ll,2ll<<32|2,1)[w];LN(a)i(PD((n-1>>3-w)+1,a),a[i]=v;v+=d)}
AL(tilL,P(n<0,n-NL?add(az(n),N(tilL(-n))):ed0())P(n>1<<30,ez0())Ax=an(tZ(n-1),n);tilV(xV,n,xt-tB);x)
A1(til,Xz(tilL(gl(x)))XZ(K("{x((*a)#&#)'1_a:|*\\|x,1}",x))XmM(x(_R(xx)))Xo(val(x))P(!xtA||xn,et1(x))x)
A1(whr,Xz(whr(enl(x)))XA(K("{$[`A~@x;(,&#'*'x),,'/x@\\:!0|/#'x:o'x;,&x]}",x))Xm(Ay=kv(&x);idx(x,Nx(whr(y))))XM(et1(x))
 XZ(I w=xt-tB;Ln=0;i(xn,Lv=iw(x,w,i);n+=v;P(n<0||v<0,ed1(x)))Ct=tZ(xn-!!xn);P(t>tI,ez1(x))Ay=an(t,n);
  xe(Y(t,case tB:{B*a=yV;i(xn,j(iw(x,w,i),*a++=i))break;}
         case tH:{H*a=yV;i(xn,j(iw(x,w,i),*a++=i))break;}
         default:{I*a=yV;i(xn,j(iw(x,w,i),*a++=i))break;})y))et1(x))
A1(rev,Xm(Ay=kv(&x);am(rev(x),rev(y)))XM(Ay=kv(&x);aM(x,Nx(eac1f(y,rev))))Xt(x)x=mut(x);Ii=0,j=xn-1,w=xw;
 W(i<j,I(!w,SWP(xb,xB[j]))J(w==1,SWP(xh,xH[j]))J(w==2,SWP(xi,xI[j]))E(SWP(xl,xL[j]))i++;j--)x)
A1(typ,x(as(TS[xt])))
A1(len,x(az(xN)))N _N(Ax/*0*/)_(XT(xn)Xm(_N(xy))XM(_n(xy)?_N(*_A(xy)):1)1)
S A1(cSI,Q(xtS||xtI)Ct=tS^tI^xt;xr-1?x(aV(t,xn,xV)):AT(t,x))
A1(unq,
 XT(P(xn<2,x)
    P(xn<<xw<ZP&&!xtA,K("{x@&(x?x)=!#x}",x))
    P(xtB||xtC,C a[256]={};Ay=an(xt,0);i(xn,I(!a[(UI)xc],a[(UI)xc]=1;y=apc(y,xc)))x(y))
    XS(cSI(unq(cSI(x))))
    K("{x@i@<i@:&@[;0;:;1]@~~':x@i:<x}",x))
 XM(en1(x))
 Xm(unq(val(x)))
 Xz(Ln=gl(x);P(n<0,ed0())rndD(n))
 et1(x))
A2(fil,YmMA(eac2f(x,y,exc))YF(y==au?x:x(y))Yt(fir(fil(x,enl(y))))K("{@[y;&^y;:;x]}",x,y))
A2(exc,Xt(fil(x,y))P(xtmM||ytmM,en2(x,y))Yt(exc(x,enl(y)))P(!xn||!yn,y(x))
 Ik=rnk(x);k>0&&k==rnk(y)?K("{x@&^y?x}",x,y):K("{x@&~(!0),x~\\:y}/",x,y))
A wdn(Ax,Ni,Nj,Nn)_(Ct=xt;Q(xtZC);Ay=an(t+1,n);xe(T(&cBH,cHI,cIL,cLD,0,cBH)[t-tB](xV+TZ[t]*i,yV,j-i);y))
A1(cC, XC(x)x=N(cB(x));Xt(ac((C)xv))AT(tC,mut(x)))
A1(cB, XB(x)x=N(cI(x));Xt(x)Ay=an(tB,xn);xe(cIB(xV,yV,yn);y))
A1(cH, XH(x)x=N(cI(x));Xt(x)Ay=an(tH,xn);xe(cIH(xV,yV,yn);y))
A1(cI, XI(x)Xzc(ai(gl(x)))XdD(cI(N(cL(x))))XZC(Ay=aI(xn);Ii=xt-tB;xe(T(&cBI,cHI,0,cLI,0,cBI)[i](xV,yV,yn);y))et1(x))
A1(cL,XlL(x)Xzc(al(gl(x)))Xt(fir(N(cL(enl(x)))))XD(Ay=aL(xn);xe(cDL(xV,yV,yn);y))x=N(cI(x));Ay=aL(xn);xe(cIL(xV,yV,yn);y))
A1(cD,XdD(x)Xzc(ad(gl(x)))Xt(fir(N(cD(enl(x)))))x=N(cL(x));Ay=aD(xn);xe(cLD(xV,yV,yn);y))
A1(cS,XsS(x)XC(x=str0(x);x(sym(xV)))Xc(as(xv))P(xtA&&!xn,x(oS))pen(x,cS))
A1(pI,Xc(pI(enl(x)))XC(x=str0(x);Qs=xV;P(!*s,x(_R(cn[tl])))Lv=pl(&s);x(*s?_R(cn[tl]):az(v)))pen(x,pI))
A1*cT[]={[tA]=cA,cB,cH,cI,cL,cD,cC,cS};
A1(csti,XD(sqzZ(cL(x)))Xd(az(gd(x)))XC(sqzZ(cB(x)))Xc(ai(xv))XzZ(x)et1(x))
A2(cst,P(xtS||ytmMA,eac2f(x,y,cst))
 Xz(YC(K("{y@(!x)+(x<0)*#y}",x,y))Yc(cst(x,enl(y)))et2(x,y))
 Xs(Iv=xv;P(v-(C)v,ed1(y))T(&csti,cD,cC,cS,pI,ed1)[si("idcsI",v+'s'*!v)](y))
 et2(x,y))
A1(sqzZ,XH(i(xn,P(xh-(B)xh,x))cB(x))XI(i(xn,P(xi-(H)xi,x))sqzZ(cH(x)))XL(i(xn,P(xl-(I)xl,x))sqzZ(cI(x)))x)
A1(sqz,P(!xtA||!xn,x)Nn=xn;Ay=xx;Ct=yt;Ym(y=oA;i(n,yq(_R(xa)))x(y))P(!c3(ti,t,ts),x)
 I(ytz,I l=0;i(n,Ay=xa;I(ytl,l=1)E(P(!yti,x)))
       I(l,t=tL)E(I a=0,b=0;i(n,Ay=xa;a=min(a,yv);b=max(b,yv))t=max(tZ(a),tZ(b))))
 E(i(n,P(t-_t(xa),x)))
 y=an(TT[t],n);Iv=yw;I(v<3,T(&cLB,cLH,cLI)[v](xV,yV,n))E(i(n,yl=gl_(xa)))x(y))
A1(cA,XA(x)Xt(a1(x))Xm(et1(x))Nn=xN;Ay=aA(n);i(yn,ya=ii(x,i))x(y))
L tru(Ax/*1*/)_(Lv=xtF?x!=au:xtt?gl_(x):xN;x(0);v)
