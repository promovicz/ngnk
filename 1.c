#include"a.h" // ngn/k, (c) 2019-2021 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/blob/master/LICENSE
#define hf(f,T,e...) S N f(OV*RE a0,V*RE r0,Nn)_(O T*a=a0;T*r=r0;LN(a)LN(r)e)
#define NG(T) hf(neg##T,T,Ni=0;\
 W(i<n,I o=0;j(ZA/SZ(T),o|=a[j]==(T)(1<<SZ(T)*8-1))P(o,i)j(ZA/SZ(T),r[j]=-a[j])a+=ZA/SZ(T);r+=ZA/SZ(T);i+=ZA/SZ(T))n)
#define F1(f,T,c...) hf(f##T,T,i(PD(n,a),r[i]=({c;}))n)
TD size_t(*F1)(OV*,V*,N);NG(B)NG(H)NG(I)F1(neg,L,-a[i])F1(neg,D,-a[i])F1(flr,C,a[i]+32*cAZ(a[i]))

#define R1(f,a...) A1(f,XmMA(eac1(x,f))a)
SN A fx(F1 f,Ax)_(P(xr==1,f(xV,xV,xn);x)Ay=atn(xt,xn);x2(f(xV,yV,yn);y))
R1(neg,Xz(az(-gl(x)))Xd(ad(-gd(x)))XcC(neg(cH(x)))P(!xtZD,et1(x))
 S O F1 f[]={negB,negH,negI,negL,negD};Nn=xn;Ay=xr>1?atn(xt,n):x;Nm=f[xt-tB](xV,yV,n);
 I(m<n,I(x-y,x=wdn(x,m,n,n-m);y=wdn(y,0,m,n))E(x=y=wdn(y,0,n,n))
       N mw=m*yW;f[xt-tB](xV+(x-y?0:mw),yV+mw,n-m))
 x-y?x(y):y)
R1(not,XF(x(ai(x==au)))eql(xtsS?as(0):ai(0),x))
R1(nul,XF(x(ai(x==au)))eql(_R(cn[xt]),x))
R1(flr,XC(fx(flrC,x))Xc(fir(flr(enl(x))))XzZ(x)XsS(cS(flr(str(x))))
 x=N(cD(x));Ay=atn(xt+tl-td,xn);x2(i(yn,yl=xd<0?(L)xd-(xd<(L)xd):(L)xd)y))

#define sqrd __builtin_sqrt
#define h(f) F1(f,D,f##d(a[i])) R1(f,fx(f##D,N(cD(x))))
h(sqr)
