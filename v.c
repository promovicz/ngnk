#include"k.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
A1(sqz,P(!xtX||!xn,x)A y=xx;UC t=yt;P(!sim(y)&&t-ta,x)L n=xn;F(n,A y=xai;P(t-yt,x))
 P(t==ta,A z=yx;F(n,A y=xai;P(!mtc_(yx,z),x))aA(zR,flp(ea1(val,x))))
 t=t_lst(t);A u=atn(t,n);
 $(t==tC,F(n,uci=gc(xai)))E$(t==tS,F(n,uii=gs(xai)))E$(t==tI,F(n,uii=gi(xai)))E$(t==tL,F(n,uli=gl_(xai)))E$(t==tD,F(n,udi=gd_(xai)))E(UR)xr;u)
A1(blw,P(xtX,x)P(xtt,a1(x))P(xta,et(x))L n=len_(x);A u=aX(n);F(n,uai=get(x,i))xr;u)
L tru(A x/*1*/)_(L r=sim(x)?gl_(x):fun(x)?!xtu||Av(x):xn;xr;r)A2(dex,xr;y)A1(fir,xtt?x:dex(x,getr(x,0)))A1(las,xtt?x:dex(x,getr(x,xn-1)))
A1(flp,P(xtaA,$(xta,A y=xy;P(!ytX||!yn,er(x))F(yn,A z=yai;P(!ztT,en(x)))L m=An(*ya);F(yn,A z=yai;P(zn-m,el(x))))AT(xt^ta^tA,x))P(xtt,enl(enl(x)))
 P(!xtX||!xn,enl(x))L m=xn,n=-1;UC t=t_lst(At(xx));F(m,A y=xai;$(t-t_lst(yt),t=tX)$(!sim(y),P(fun(y),et(x))$(n<0,n=yn)E(P(n-yn,el(x)))))
 A u=aX(n<0?1:n);F(un,A y=a0();Fj(m,y=apd(y,get(xaj,i)))uai=y)xr;u)
A1(til,P(xtX,xn?ed(x):x)P(xto,val(x))P(xta,fir(AT(tX,x)))P(xtiI,gI(N(til(gL(x)))))
 P(xtl,L n=gl(x);P(n<0&&n!=_0N,add(al(n),N(til(al(-n)))))A u=aL(n);F(n,uli=i)u)P(!xtL,et(x))
 L p=1;F(xn,p*=xli;P(xli<0||p<0,ed(x)))L q=p;A u=aX(xn);F(un,L m=xli;A y=uai=aL(p);$(q,q/=m;L v=0;F(p/q,Fj(q,yl[i*q+j]=v);v++;v*=v<m)))xr;u)
A1(whr,P(xtA||xtX,et(x))P(xta,A y=gkv(&x);idx(x,Nx(whr(y))))
 x=enla(x);x=N(gL(x));L n=0;F(xn,P(xli<0,ed(x))n+=xli)A u=aL(n);mr2(x,n=0;F(xn,Fj(xli,ul[n++]=i))u))
A1(rev,P(xtt,x)P(xta,AT(ta,N(ea1(rev,AT(tX,x)))))P(xtA,A y=gkv(&x);aA(x,Nx(ea1(rev,y))))
 x=mut(x);L j=xn,m=(xn+1)/2;I w=tZ(xt);P(w==1,F(m,--j;swp(xci,xcj))x)
                                       P(w==4,F(m,--j;swp(xii,xij))x)
                                       P(w==8,F(m,--j;swp(xli,xlj))x)UR;0)
A1(typ,UC t=xt;xr;as(sym(atnv(tC,1,&tsym[t]))))A1(len,dex(x,al(len_(x))))L len_(A x/*0*/)_(xtT?xn:xta?len_(xy):!xtA?1:An(xy)?len_(*A(xy)):1)
A1(unq,P(!xtT,et(x))A u=atn(xt,0);I w=tz(xt);P(w==ZR,F(xn,fpa(&u,mR(xai)))xr;u)
                                             P(w==0,F(xn,fpc(&u,xci))xr;u)
                                             P(w==2,F(xn,fpi(&u,xii))xr;u)
                                             P(w==3,F(xn,fpl(&u,xli))xr;u)UR;0)
S A2(fil,P(ytX||yta,eac(cv('^'),A_(x,y),2))P(ytt,fir(xpt(x,enl(y))))K("{@[y;&^y;x]}",x,y))
A2(xpt,P(xtt,fil(x,y))P(xtaA||ytaA,en(x,y))y=enla(y);$(xtX,y=blw(y))K("{x@&^y?x}",x,y))
A slc_(A x/*0*/,L i,L n)_(asrt(xtT);UC t=xt;L w=tZ(t);A u=atn(t,n);mc(uc,xc+i*w,n*w);$(t==tX,mRa(u);u=sqz(u))u)
A2(cut,
 P(ytl,P(!xtT,et(x,y))L i=gl(y);P(i<0||i>=xn,x)A u=atn(xt,xn-1);L w=tZ(xt);mc(uc,xc,i*w);mc(uc+i*w,xc+i*w+w,(xn-i-1)*w);$(xtX,u=sqz(mRa(u)))xr;u)
 P(yta,rsh(xpt(mR(yx),x),y))P(ytt,et(x,y))x=Ny(gL(x));A u;L m=yn;
 $(xtL,L n=xn,l=yn;x=apv(x,&l);L p,q=*xl;F(n,p=q;q=xl[i+1];P(p>q,ed(x,y))P(p<0||q>m,el(x,y)))q=*xl;u=aX(n);F(n,p=q;q=xl[i+1];uai=slc_(y,p,q-p)))
 E(L p=gl_(x);P(p==_0N,ed(x,y))$(llabs(p)<m,u=slc_(y,p<0?0:p,m-llabs(p)))E(u=atn(yt,0)))
 xr;yr;u)
S L gLI(I i)_(i==_0Ni?_0N:i)S I gIL(L l)_(l==_0N?_0Ni:l)S D gDL(L l)_(l==_0N?_0n:(D)l)
A1(gL,P(xtlL,x)P(xtd,al((L)gd(x)))P(xtD,A u=aL(xn);F(un,uli=(L)xdi)xr;u)x=N(gI(x));P(xtt,al(gLI(gi(x))))A u=aL(xn);F(un,uli=gLI(xii))xr;u)
S A1(gC,P(xtcC,x)x=N(gI(x));P(xtt,ac(gLI(gi(x))))A u=aC(xn);F(un,uci=xii)xr;u)
A1(gD,P(xtdD,x)x=N(gL(x));P(xtt,ad(gDL(gl(x))))A u=aD(xn);F(un,udi=gDL(xli))xr;u)
A1(gI,P(xtiI,x)P(xtdD,gI(gL(x)))P(xtl,ai(gIL(gl(x))))P(xtL,A u=aI(xn);F(un,uii=gIL(xli))xr;u)P(xtc,ai(gc(x)))P(xtC,A u=aI(xn);F(un,uii=(UC)xci)xr;u)et(x))
A1(gS,P(xtsS,x)P(xtcC,as(sym(enla(x))))et(x))
A2(cst,P(ytaAX,eac(cv('$'),A_(x,y),2))P(xts,C*s=symptr(gs(x)),c=*s*!s[1];!c?gS(y):c=='c'?gC(y):c=='i'?gI(y):c=='j'?gL(y):c=='f'?gD(y):en(y))
 P(xtl,L n=gl(x);P(n<0,en(y))P(!ytcC,et(y))A u=aC(n);y=enla(y);L m=yn;mr2(y,mc(uc,yc,min(n,m)));F(max(0,n-m),uc[m+i]=32)u)en(x,y))
