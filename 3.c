#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
#define i4(w,n,a,b,c,d) S4(w,i(n,a),i(n,b),i(n,c),i(n,d))
#define MIN(x,y) (x)=min(x,y)
#define MAX(x,y) (x)=max(x,y)
A1(inv,x=mut(x);Nn=xn*xW;i(PD(n,xC),xc^=-1)x)

S A3(___f,/*010*/Ni=!y;I(i,y=ii(z,0))Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));B(!y))y)
S A3(dexf,/*010*/Au=las(zR);y?y(u):u)
L minfZ(Lv,Ax/*0*/)_(i4(xw,xn,MIN(v,xb),MIN(v,xh),MIN(v,xi),MIN(v,xl))v)
L maxfZ(Lv,Ax/*0*/)_(i4(xw,xn,MAX(v,xb),MAX(v,xh),MAX(v,xi),MAX(v,xl))v)
S A3(mmmf,/*010*/Ii=xv==7;P((y&&ytf)||ztF,y=of1(y?cF(y):af(i?-WF:WF));z=of1(cF(zR));of0(N(z(mmmf(x,y,z)))))Lv=y?gl(y):i?-WL:WL;
 L l=-1ll<<8*zW-1,h=~l;Nn=zn;P((i?v>=h:v<=l)||!n,az(v))v=v<l?l:v>h?h:v;az(i?maxfZ(v,z):minfZ(v,z)))
L addfZ(Lv,Ax/*0*/)_(i4(xw,xn,v+=xb,v+=xh,v+=xi,v+=xl)v)
L mulfZ(Lv,Ax/*0*/)_(i4(xw,xn,v*=xb,v*=xh,v*=xi,v*=xl)v)
S A3(admf,/*010*/Ii=xv==3;Nn=zn;P((y&&ytf)||ztF,Fv=y?gf(cF(y)):i;z=cF(zR);af(ze(I(i,i(n,v*=zf))E(i(n,v+=zf))v)))Lv=y?gl(y):i;az((i?mulfZ:addfZ)(v,z)))
S A3(subf,/*010*/y=y?neg(y):zn?mul(ai(-2),ii(z,0)):ai(0);neg(admf(ADD,y,z)))
A3(arf,/*010*/Q(xtv)Q(xv<11)Q(!y||ytzfc)Q(ztZFC)T(&dexf,admf,subf,admf,___f,___f,mmmf,mmmf,___f,___f,___f)[xv](x,y,z))

S A3(___s,/*010*/Ni=!y;Au;I(i,y=ii(z,0);u=enl(yR))E(yR;u=oB)Nn=zn;W(i<n,y=y(x2(y,ii(z,i++)));P(!y,u(0))uq(yR))y(u))
S A3(dexs,/*010*/y?y(zR):zR)
S A3(adms,/*010*/L w=y?gl(y):x==MUL;Nn=zn;I b=1;Lv=w;Ct=tB+zw;Au=an(n,t);
 I(x==ADD,i4(zw,n,ub=v+=zb;B(v-(B)v,b=0),uh=v+=zh;B(v-(H)v,b=0),ui=v+=zi;B(v-(I)v,b=0),ul=v+=zl))
 E(       i4(zw,n,ub=v*=zb;B(v-(B)v,b=0),uh=v*=zh;B(v-(H)v,b=0),ui=v*=zi;B(v-(I)v,b=0),ul=v*=zl))P(b,u)z=cT[t+1](u(zR));z(adms(x,az(w),z)))
S A3(subs,/*010*/y=neg(y?y:mul(ai(2),ii(z,0)));neg(adms(ADD,y,z)))
S A3(mxms,/*010*/P((!y||ytz)&&ztZ,Lv=y?gl(y):-WL,l=-1ll<<8*zW-1,h=~l;Nn=zn;I(v<=l||h<=v,P(v>=0,rsz(n,az(v)))v=v<0?l:h)
                                  Au=an(n,zt);i4(zw,n,ub=MAX(v,zb),uh=MAX(v,zh),ui=MAX(v,zi),ul=MAX(v,zl))u)___s(x,y,z))
S A3(mnms,/*010*/P((!y||ytz)&&ztZ,z=inv(zR);z(inv(mxms(MXM,y?az(~gl(y)):0,z))))___s(x,y,z))
S A eqlsL(Lv,Ax/*0*/)_(Ay=aB(xn);i4(xw,xn,yb=v=v==xb,yb=v=v==xh,yb=v=v==xi,yb=v=v==xl)y)
S A3(eqls,/*010*/Nn=zn,i=!y;Lv=gl(y?y:io(z,0)),a=v;Au=aB(n);S4(zw,W(i<n,ub=v=v==zb;i++),W(i<n,ub=v=v==zh;i++),W(i<n,ub=v=v==zi;i++),W(i<n,ub=v=v==zl;i++))y||!n?u:a4(u,ai(0),av,az(a)))
A3(ars,/*010*/Q(xtv)Q(xv<11)Q(!y||ytzc)Q(ztZC)T(&dexs,adms,subs,adms,___s,___s,mnms,mxms,___s,___s,eqls)[xv](x,y,z))

S A3(dexp,/*010*/zn?cat11(y?y:_R(cn[zt]),drp(-1,zR)):y(zR))
S A3(___p,/*010*/v2[xv](z,dexp(av,y,z)))
S A3(modp,/*010*/e2f(mod,z,dexp(av,y,z)))
S A3(mxmp,/*010*/I w=zw;Lv=gl(y),l=-1ll<<(8<<w)-1,h=~l;MAX(v,l);Nn=zn;P(v>=h,rsz(n,az(v)))y=an(zn,tB+zw);S4(w,zB[-1]=v,zH[-1]=v,zI[-1]=v,zL[-1]=v)Nj=n-1;
 i4(w,n,yB[j]=max(zB[j],zB[j-1]);j--,yH[j]=max(zH[j],zH[j-1]);j--,yI[j]=max(zI[j],zI[j-1]);j--,yL[j]=max(zL[j],zL[j-1]);j--)zn=n;y)
S A3(mnmp,/*010*/y=az(~gl(y));z=inv(zR);z(inv(mxmp(MXM,y,z))))
S A3(cmpp,/*010*/I o=x-LTN,w=zw;Nn=zn;Au=aB(n);Lv=gl(y),p=iw(z,w,0);*uB=!o?p<v:o==1?p>v:p==v;Lm=n-1,j=m;
 S4(o,i4(w,m,uB[j]=zB[j]< zB[j-1];j--,uB[j]=zH[j]< zH[j-1];j--,uB[j]=zI[j]< zI[j-1];j--,uB[j]=zL[j]< zL[j-1];j--),
      i4(w,m,uB[j]=zB[j]> zB[j-1];j--,uB[j]=zH[j]> zH[j-1];j--,uB[j]=zI[j]> zI[j-1];j--,uB[j]=zL[j]> zL[j-1];j--),
      i4(w,m,uB[j]=zB[j]==zB[j-1];j--,uB[j]=zH[j]==zH[j-1];j--,uB[j]=zI[j]==zI[j-1];j--,uB[j]=zL[j]==zL[j-1];j--),)u)
A3(arp,/*010*/Q(xtv)Q(xv<11)Q(ytzc)Q(ztZC)T(&dexp,___p,___p,___p,___p,modp,mnmp,mxmp,cmpp,cmpp,cmpp)[xv](x,y,z))

S A4(dexa,/*1000*/uR;Ny(sup(&x,&u));x=mut(x);Nn=yn;I wx=xw,wy=yw,wu=utt?-1:uw;Lv=wu<0?gl_(u):0;
  ue(I(utt,i4(wx,n,xB[iw(y,wy,i)]=v ,xH[iw(y,wy,i)]=v ,xI[iw(y,wy,i)]=v ,xL[iw(y,wy,i)]=v ))
     E(    i4(wx,n,xB[iw(y,wy,i)]=ub,xH[iw(y,wy,i)]=uh,xI[iw(y,wy,i)]=ui,xL[iw(y,wy,i)]=ul))x))
S A4(adma,/*1000*/yR;uR;x=cL(x);u=cL(u);x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 I(utt,Lv=gl(u);ye(I(zv==1,I(ytL,i(n,xL[yl]+=v ))E(i(n,xL[yi]+=v )))E(I(ytL,i(n,xL[yl]*=v ))E(i(n,xL[yi]*=v )))0))
 E(ue(          ye(I(zv==1,I(ytL,i(n,xL[yl]+=ul))E(i(n,xL[yi]+=ul)))E(I(ytL,i(n,xL[yl]*=ul))E(i(n,xL[yi]*=ul)))0)))x)
S A4(mmma,/*1000*/yR;uR;I d=utT;I(!d,u=enl(u))Ny(sup(&x,&u));x=mut(x);I(!ytL,y=cI(y))Nn=yn;
 ye(ue(I(zv==6,I(ytL,i4(xw,n,MIN(xB[yl],uB[d*i]),MIN(xH[yl],uH[d*i]),MIN(xI[yl],uI[d*i]),MIN(xL[yl],uL[d*i])))
               E(    i4(xw,n,MIN(xB[yi],uB[d*i]),MIN(xH[yi],uH[d*i]),MIN(xI[yi],uI[d*i]),MIN(xL[yi],uL[d*i]))))
       E(      I(ytL,i4(xw,n,MAX(xB[yl],uB[d*i]),MAX(xH[yl],uH[d*i]),MAX(xI[yl],uI[d*i]),MAX(xL[yl],uL[d*i])))
               E(    i4(xw,n,MAX(xB[yi],uB[d*i]),MAX(xH[yi],uH[d*i]),MAX(xI[yi],uI[d*i]),MAX(xL[yi],uL[d*i]))))x)))
S A4(suba,/*1000*/u(adma(x,y,ADD,neg(uR))))
S I ina(Ax/*0*/,Nn)_(S4(xw,P(n-(B)n,1)i(xn,P(!in(xb,n),0)),P(n-(H)n,1)i(xn,P(!in(xh,n),0)),P(n-(I)n,1)i(xn,P(!in(xi,n),0)),i(xn,P(!in(xl,n),0)))1)
A4(ara,/*1000*/Q(xtZC)Q(ytZC)Q(ztv)Q(0xcf&1<<zv)Q(utzZ||utcC)P(utT&&yn-un,el1(x))P(!ina(y,xn),ei1(x))T(&dexa,adma,suba,adma,0,0,mmma,mmma)[zv](x,y,z,u))
