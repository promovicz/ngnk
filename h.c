#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
SN A flt(Ax,Ay,Cb)_(Q(xtF);P(xK-1,er2(x,y))Ym(K("{(!y)[i]!(. y)i:&z~/:x@. y}",x,y,ai(b)))
 x=Ny(ap1(x,yR));x=xN?Ny(cL(x)):x(oB);P(!xtt&&xN-yN,el2(x,y))
 Az=rsh(0,yR);i(yN,Ln=gl(ii(x,i));B(b&&n-(UI)n,z=ed1(z))j(b?n:!n,zq(ii(y,i))))x(y(z)))
S V rshV(OV*a,Nm,V*b,Nn){Q(m);Mc(b,a,min(m,n));W(2*m<=n,Mc(b+m,b,m);m*=2)I(n>m,Mc(b+m,b,n-m))}
ALA(rsh,Xt(rsh(n,enl(x)))
 XT(P(!xn,rsh(n,enl(fir(x))))P(n<0,n-NL?rev(rsh(-n,rev(x))):x)Ay=an(xt,n);rshV(xV,xn*xW,yV,n*xW);x(ytA?sqz(mRa(y)):y))
 XM(Ay=kv(&x);aM(x,Nx(ear2(az(n),y,RSH))))Q(xtm)Ay=kv(&x);x=Ny(rsh(n,x));y=Nx(rsh(n,y));am(x,y))
S A slc(Ax/*0*/,Ni,Nj)_(Q(xtT&&i<=j&&i<=xn)Ay=an(xt,j-i);Mc(yV,xV+i*xW,(j-i)*xW);XA(sqz(mRa(y)))y)
S ALA(chp,P(n<0,ed1(x))Lm=(xn+n-1)/n;Ay=aA(m);i(m,ya=slc(x,n*i,min(xn,n*i+n)))x(y))
S A shp(O L*s,Nn,Ax,Lm)_(Q(xtT)Q(xn)Q(n)P(n==1,rsh(m**s,x))x=shp(s+1,n-1,x,m**s);s[1]?chp(s[1],x):rsh(m**s,enl(x)))
S A rshL(O L*s,Nn,Ax)_(Xt(rshL(s,n,enl(x)))XmM(en1(x))P(!n,fir(x))P(n>8,ez1(x))
 P(n==1&&*s==NL,x)I(n==2,P(*s==NL,chp(s[1],x))P(s[1]==NL,K("{((-x)!(#y)*!x)_y}",az(*s),x)))P(!xn,rshL(s,n,enl(fir(x))))
 Lm=1;i(n,P(s[i]<0,ed1(x))m*=max(1,s[i]))x=N(rsh(m,x));shp(s,n,x,1))
A2(hsh,Xz(rsh(gl(x),y))XZ(x=Ny(cL(x));x(rshL(xL,xn,y)))XF(flt(x,y,1))
 XT(P(ytm||ytM&&xtS,a2t(x,ap1(y,xR),yt))et2(x,y))et2(x,y))
ALA(drp,XT(n*=n!=NL;P(-n<=(UL)xn&&xr==1,I(xtA,mrn(-n,xA+xn+n))AN(xn+n,x))x(slc(x,max(0,min((L)xn,n)),max(0,min((L)xn,xn+n)))))
 Xm(Ay=kv(&x);am(Ny(drp(n,x)),Nx(drp(n,y))))XM(Ay=kv(&x);aM(x,Nx(eac2f(az(n),y,und))))er1(x))
S AAL(rmv,XT(P(!in(i,xn),x)Ay=an(xt,xn-1);Mc(yV,xV,i*xW);Mc(yV+i*xW,xV+i*xW+xW,(xn-i-1)*xW);I(xtA,y=sqz(mRa(y)))x(y))et1(x))
S A2(cut,Q(xtZ)Q(ytMT)K("{y$[|/0<':x,#y;`err\"domain\";x+!'1_-':x,#y]}",x,y))
A2(und,Xz(drp(gl(x),y))XF(flt(x,y,0))Xm(Az=kv(&x);y=fnd(xR,y);P(!y,x(z(0)))yR;am(Nz(und(x,y)),Nx(und(z,y))))
 P(xtZ&&ytMT,cut(x,y))P(xtMT&&ytz,rmv(x,gl(y)))Ym(K("{((!y)^x)#y}",x,y))YM(K("{+x_+y}",x,y))et2(x,y))
A1(enl,Xi(aV(tZ(xv),1,&x))XF(a1(x))XP(aV(TT[xt],1,&x))Xt(x(aV(TT[xt],1,xV)))Xm(Ay=kv(&x);aM(x,eac1f(y,enl)))a1(x))
A2(cat,P(xtm&&ytm,Az=kv(&y);K("@[;;:;]",x,y,z))Xmt(cat(enl(x),y))Ymt(cat(x,enl(y)))
 P(xtM||ytM,
  P(xtT||ytT,x=Ny(cA(x));y=Nx(cA(y));cat(x,y))
  P(!xtM||!ytM,et2(x,y))
  P(!mtc_(xx,yx),ed2(x,y))
  Az=eac2f(_R(xy),_R(yy),cat);x(y(z?aM(_R(xx),z):0)))
 P(!yn,y(x))P(!xn,x(y))I(xtZ&&ytzZ,N(sup(&x,&y)))I(xt-yt,x=cA(x);y=cA(y))
 Nm=xn,n=yn,w=xW;x=room(m+n,x);Mc(xV+m*w,yV,n*w);I(ytA,yr-1?mRa(y):AN(0,y))y(x))
A2(apd,Q(xtMT);Nn=xn;P(!n,enl(x(y)))
 P(xtB&&yti&&yv==(B)yv||xtC&&ytc,apc(x,yv))
 P(xtH&&yti&&yv==(H)yv,x=room(n+1,x);xH[n]=yv;x)
 P(xtI&&yti||xtS&&yts ,x=room(n+1,x);xI[n]=yv;x)
 P(xtL&&yti           ,x=room(n+1,x);xL[n]=yv;x)
 P(xtL&&ytl||xtD&&ytd ,x=room(n+1,x);xL[n]=gl(y);x)
 P(xtZ&&ytz,N(sup(&x,&y));apd(x,y))
 XM(P(!ytm||!mtc_(xx,yx),apd(Ny(cA(x)),y))x=mut(x);Az=xy=mut(xy);i(zn,_q(za,ii(yy,i)))y(x))
 P(!xtA&&(!ytt||xt-TT[yt]),apd(Ny(cA(x)),y))
 Lv=xtA?(L)y:gl(y);apv(x,&v))
A apv(Ax,OV*v )_(Q(xtT);     Nn=xn;x=room(n+1,x);Mc(xV+n*xW,v,xW);x)
A apc(Ax,Cc   )_(Q(xtC||xtB);Nn=xn;x=room(n+1,x);xC[n]=c;x)
A cts(Ax,Qs,Nm)_(Q(xtC);     Nn=xn;x=room(n+m,x);Mc(xV+n,s,m);x)
S A insL(Ax,Li,Lj,Ay)_(YF(insL(x,i,j,Nx(y(y1(slc(x,i,j))))))Xmt(et2(x,y))Ymt(insL(x,i,j,enl(y)))P(xtM||ytM,en2(x,y))
 P(!in(i,j+1)||!in(j,xN+1),ei2(x,y))P(xtZ&&ytZ&&xt-yt,N(sup(&x,&y));insL(x,i,j,y))P(xt-yt,insL(cA(x),i,j,cA(y)))
 Az=an(xt,xn-j+i+yn);Mc(zV,xV,i*xW);Mc(zV+i*xW,yV,yn*xW);Mc(zV+(i+yn)*xW,xV+j*xW,(xn-j)*xW);
 I(xtR,I(xr-1,mRn(i,xA);mRn(xn-j,xA+j))E(mrn(j-i,xA+i);AN(0,x))I(yr-1,mRa(y))E(AN(0,y)))x(y(z)))
S A3(ins3,Yz(Li=gl(y);insL(x,i,i,z))YZ(P(yN-2,el2(x,z(y)))Li=gl(ii(y,0)),j=gl(las(y));insL(x,i,j,z))et2(x,z(y)))
AA(ins,n==3?ins3(*a,a[1],a[2]):en8(a,n))
