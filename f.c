#include"a.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
//prng: xoshiro256+ (public domain) http://vigna.di.unimi.it/xorshift/ seeded with the central column of rule30, little-endian:
// ","/"abcd",'"=0x",/:+"0123456789abcdef"@(16#16)\2/|+4 64#(n{(|(8#2)\30)@2/'3'0,x,0}\n=!2*n)@'n:256
S V rndl(L*r,UL n){S UL a=0xd5a986ae75c9a33b,b=0x1016d8e3483a8f0f,c=0x81f9e6260eb8e5df,d=0xfa9b718d8d0769bf;
 F(n,r[i]=a+d;O UL t=b<<17;c^=a;d^=b;b^=c;a^=d;c^=t;d=d<<45|d>>19)}
S A rnd(L n,L m)_(
 Y(n==_0Nl,n=-m)
 A x=aL(absL(n));rndl(xl,xn);
 Y(m,Y(m<=1ll<<32,F(xn,xli=(UI)xli*(UL)m>>32))E(F(xn,xli=(UL)xli%m)))
 Y(n<0,n=-n;el(n>m,x)F(n,L k=m-n+i;L v=((UL*)xl)[i]%=k+1;L*p=&xli;F(i,Y(xli==v,*p=k;B)))A y=rnd(n,0);F(n,SWP(xli,xl[(UL)yli%(i+1)]))yr)x)
SN L fnda(A x/*0*/,A y/*1*/)_(asrt(xtA); F(xn,P(mtc_(xai,y),i))_0Nl)L fpa(A*p,A y)_(A x=*p;L n=xn,i=fnda(x,y);P(i<0,*p=apd(x,y);n)yr;i)
SN L fndc(A x/*0*/,C v)_(asrt(Zt[xt]==0);F(xn,P(xci==v,i))_0Nl)L fpc(A*p,C v)_(A x=*p;L n=xn,i=fndc(x,v);P(i<0,*p=apv(x,&v);n)i)
NO L fndi(A x/*0*/,I v)_(asrt(Zt[xt]==2);F(xn,P(xii==v,i))_0Nl)L fpi(A*p,I v)_(A x=*p;L n=xn,i=fndi(x,v);P(i<0,*p=apv(x,&v);n)i)
NO L fndl(A x/*0*/,L v)_(asrt(Zt[xt]==3);F(xn,P(xli==v,i))_0Nl)L fpl(A*p,L v)_(A x=*p;L n=xn,i=fndl(x,v);P(i<0,*p=apv(x,&v);n)i)
A2(fnd,
 P(xtt,P(xts,L i=gl(K("``j`hex`aes?",x));en(i<0,y)(A1*[]){des,jsr,unh,aes1}[i](y))et(!xtil,x,y)
       P(ytl,rnd(gl(gL(x)),gl(y)))P(yti,K("{`i$x?`l$y}",x,y))P(ytc,K("{`c$\"aA\"[y~\"A\"]+x?26}",x,y))K("{y@x?#y}",x,y))
 P(xtm,A z=gkv(&x);idx(x,fnd(z,y)))
 en(xtM,x,y)
 P(ytt,P(!xtA&&fun(y),xr;yr;al(_0Nl))
       fir(fnd(x,enl(y))))
 P(!xtA&&ytA,ear(cv('?'),A(x,y),2))
 P(!xtA&&yt-xt,xr;rsh(len(y),mR(cn[tl])))
 A u=aL(yn);I w=Zt[xt];
 Y(ref(x),F(un,A z=get(y,i);uli=fnda(x,z);zr))
 EY(w==0,F(un,uli=fndc(x,yci)))
 EY(w==2,F(un,uli=fndi(x,yii)))
 EY(w==3,F(un,uli=fndl(x,yli)))
 E(en(1,u,x,y))
 xr;yr;u)
