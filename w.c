#include"k.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
S AX(enc,P(n>1,ern(n,a))P(xtiI,x=gL(xR);A u=enc(x,a,n);xr;u)P(!xtlL,etn(n,a))A y=N(gL(*a));P(ytt,A z=enc(x,A_(enl(y)),1);zn?fir(flp(z)):dex(z,aL(0)))
 P(xtt,UL v=gl_(x),r=0,m=0,b=1;F(yn,UL w=yli;Y(r<w,r=w))W(m<64&&b<=r,m++;b*=v)x=rsh(al(m),al(v));dex(x,enc(x,&y,1)))
 P(!xn,yr;a0())A u=aX(xn);y=mut(y);for(L i=xn-1;i>0;i--){UL m=xli;m+=!m;A z=uai=aL(yn);Fj(yn,UL v=ylj,w=ylj=v/m;zlj=v-w*m)}
 UL m=*xl;ux=y;Y(m,Fj(yn,ylj%=m))u)
S AX(spl,asrt(xtcC);P(n>1,ern(n,a))A y=*a;Et(!ytC,y)C*s=xtc?(V*)&x:xc;L l=len_(x);El(!l,y)A u=a0();C*p=yc,*q=yc,*q2=yc+yn,*q1=q2+1-len_(x);
 W(q<q1,C m=1;F(l,m&=s[i]==q[i])Y(m,u=apd(u,aCm(p,q));p=q+=l)E(q++))Y(x-ac(10)||p<q2,u=apd(u,aCm(p,q2)))yr;u)
S AX(join,asrt(xtcC);P(n>1,ern(n,a))A y=*a;Et(!ytX,y)C*s=xtc?(V*)&x:xc;L m=len_(x),k=yn,l=m*(k-!!k);F(k,A z=yai;Et(!ztcC,y)l+=len_(z))
 A u=aC(l);C*p=uc;F(k-1,A z=yai;Y(ztc,*p++=gc(z))E(mc(p,zc,zn);p+=zn)mc(p,s,m);p+=m)Y(k,A z=ya[k-1];Y(ztc,*p=gc(z))E(mc(p,zc,zn)))yr;u)
A ea1(A1 f,A x)_(P(xtt,f(x))P(xta,x=mut(x);xy=ea1(f,xy);P(!xy,xy=au0;xr;0)x)
 I b=xtX&&Ar(x)==1;L n=len_(x);P(!n,x)A u=a0();F(n,A y=f(b?xai:get(x,i));Y(!y,Y(b,mrn(xn-i-1,xa+i+1))ur;u=0;B)u=apd(u,y))Y(b,x=AN(0,x))xr;u)
S L cfm(O A*a/*0*/,L n)_(L m=-1;F(n,A x=a[i];Y(!xtt,L l=len_(x);P(m>=0&&m-l,-2)m=l))m)
S AX(eaca,A z,b[8];F(n,A y=a[i];Y(yta,z=yx;B))zR;F(n,A y=b[i]=a[i];Y(yta,P(!mtc_(z,yx),zr,edn(n,b))b[i]=val(y)))A u=eac(x,b,n);(u?aa:dex)(z,u))
AX(eac,P(xtilIL,n>1?ern(n,a):K("{$[|/`i`l=@x;y(!x)+/:!0|1-x-#y;-1+/~x>\\:y]}",xR,*a))
 A b[8];C t[8];L m=-1;F(n,A y=b[i]=a[i];P(yta,eaca(x,a,n))t[i]=pkd(y)?0:ytt?1:ytX?2+(Ar(y)>1):4;Y(t[i]>1,L l=len_(y);P(m>=0&&m-l,eln(n,a))m=l))
 P(m<0,app(x,a,n))F(n,Y(t[i]==1,Ar(a[i])+=m))A u=m?0:a0(); //0:pkdatm,1:refatm,2:tX(r=1),3:tX(r>1),4:other
 Fj(m,F(n,A y=a[i];Y(t[i]==2,b[i]=yaj)Y(t[i]>2,b[i]=get(y,j)))
      A z=app(x,b,n);Y(!j,u=sim(zt)?AN(0,atn(t_lst(zt),m)):a0())
      Y(!z,ur;u=0;F(n,A y=a[i];Y(t[i]==1,Ar(y)-=m-j-1)Y(t[i]==2,mrn(m-j-1,ya+j+1)))B)u=apd(u,z))
 F(n,mr(t[i]-2?a[i]:AN(0,a[i])))u)
S AX(cvg,P(n==2,A y=*a,u=a[1];P(ytil,F(gl(y),u=N(app(x,&u,1)))u)W(1,uR;A z=N2(y,u,app(y,&u,1));Y(!tru(z),B)u=Ny(app(x,&u,1)))yr;u)
 P(n==1,A y=*a,z=yR,u;W(1,zR;u=N2(y,z,app(x,&z,1));Y(mtc_(u,y)||mtc_(u,z),B)zr;z=u)yr;zr;u)ern(n,a))
AX(rdc,P(xtilIL,n>1?ern(n,a):K("{z+x*y}/[0;;]",xR,*a))P(xtcC,join(x,a,n))P(xk<2,cvg(x,a,n))
 A y=n>1?n--,*a++:0,z=*a;L m=cfm(a,n);P(m==-1,y?app(x,a-1,n+1):*a)P(m<0,Y(y,yr)eln(n,a))P(!m&&!y,A u=id_(x,z);mrn(n,a);u)
 Y(xtv&&xv<11&&(!y||ytt)&&n==1&&(ztC||ztIL||ztD),Y(ztC,z=gL(z);P(!z,Y(y,yr);0))Y(y&&ytdD||ztdD,Y(y,y=gD(y))z=gD(z))
  P(ztI,I*p=zi,a=!y?m--,*p++:gi(y);m2(z,((V(*)(V*,V*,L))arf[zt-tI][xv][4])(&a,p,m);0);ai(a))
  P(ztL,L*p=zl,a=!y?m--,*p++:gl(y);m2(z,((V(*)(V*,V*,L))arf[zt-tI][xv][4])(&a,p,m);0);al(a))
  P(ztD,D*p=zd,a=!y?m--,*p++:gd(y);m2(z,((V(*)(V*,V*,L))arf[zt-tI][xv][4])(&a,p,m);0);ad(a)))
 L i=!y;Y(i,y=get(z,0))A b[8];W(i<m,*b=y;Fj(n,b[j+1]=get(a[j],i))y=app(x,b,n+1);Y(!y,B)i++)mrn(n,a);y)
S AX(cvi,P(n>2,ern(n,a))A y,z,u;Y(n==1,y=0;z=*a)E(y=*a;z=a[1])
 P(!y,A y0=y=zR;u=enl(yR);W(1,z=yR;y=app(x,&y,1);P(!y,zr;ur;mr(y0);0)I m=mtc_(y,z)||mtc_(y,y0);zr;Y(m,B)u=apd(u,yR))mr(y0);yr;u)
 P(ytil,u=enl(zR);F(gl(y),z=Nu(app(x,&z,1));u=apd(u,zR))zr;u)
 u=enl(zR);W(1,zR;A w=app(y,&z,1);P(!w,yr;zr;ur;0)Y(!tru(w),B)z=app(x,&z,1);P(!z,yr;ur;0)u=apd(u,zR))yr;zr;u)
AX(scn,P(xtilIL,enc(x,a,n))P(xtcC,spl(x,a,n))P(xk<2,cvi(x,a,n))
 P(n==1,A z=*a;P(ztt||!zn,z)P(zta,z=mut(z);zy=scn(x,&zy,1);z)P(x==cv(','),scn(x,A_(a0(),z),2))
  P(xtv&&xv<11&&(ztIL||ztD||ztC),Y(ztC,z=N(gL(z)))
   I w=tZ[zt];A u=ax(z);mc(uc,zc,w);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][5])(zc,zc+w,uc+w,zn-1);u)
  A y=get(z,0),u=enl(yR);L i=0,n=zn;W(++i<n,y=N(app(x,A_(y,get(z,i)),2));u=apd(u,yR))yr;zr;u)
 Y(n==2,A u=a[1];P(uta,u=mut(u);uy=scn(x,A_(*a,uy),2);u)P(utt,ern(n,a))P(!un,mr(*a),u))
 A y=*a++;n--;L m=cfm(a,n);P(m==-2,yr;eln(n,a))A u=a0(),b[8];
 F(m,*b=y;Fj(n,b[j+1]=get(a[j],i))y=app(x,b,n+1);P(!y,mrn(n,a);ur;0)u=apd(u,yR))mrn(n,a);yr;u)
AX(eap,P(n==1&&xtilIL,eac(x,a,n))P(n>2,ern(n,a))A z=a[n-1],y=n-1?*a:zt-tS?id_(x,*a):as(0);Et(!ztT,y,z)P(!zn,yr;z)
 Y(xtv&&xv<11,
  P(yti&&(ztI||ztC) ,I a=gi(gI(y));z=N(gI(z));A u=ax(z);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][6])(&a,zc,uc,zn);u)
  P(ytil&&(ztL||ztC),L a=gl(gL(y));z=N(gL(z));A u=ax(z);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][6])(&a,zc,uc,zn);u)
  P(ytd||ztD        ,D a=gd(gD(y));z=N(gD(z));A u=ax(z);((V(*)(V*,V*,V*,L))arf[zt-tI][xv][6])(&a,zc,uc,zn);u))
 A u=a0();F(zn,y=app(x,A_(get(z,i),y),2);P(!y,zr;ur;0)u=apd(u,y);y=get(z,i))yr;zr;u)
AX(ear,P(n==1&&xtilIL,rdc(x,a,n))P(n-2,enn(n,a))x=prj(x,A_(*a,au_plc  ),n);dex(x,eac(x,a+1,1)))
AX(eal,P(n==1&&xtilIL,scn(x,a,n))P(n-2,enn(n,a))x=prj(x,A_(au_plc,a[1]),n);dex(x,eac(x,a  ,1)))
