#include"a.h" // ngn/k, (c) 2019-2022 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
I si(Qs,Iv)_(SC0(s,v)-(C*)s)S D p10(In)_(Dv=1;i(n,v*=10)v)S Q pw(Qs)_(W(*s==32,s++)s)
L pu(Q*p)_(Qs=*p;Lv=0;Cc=*s;W(c09(c),v=10*v+c-'0';c=*++s)*p=s;v)L pl(Q*p)_(Im=**p=='-';*p+=m;(1-2*m)*pu(p))
S D pdu(Q*p)_(UL v=pu(p);Qs=*p;Cc=*s;P(c=='n'||c=='w',(*p)++;c=='n'?ND:WD)I e=0;
 I(c=='.',c=*++s;W(c09(c),I(v<(1ull<<63)/10,v=10*v+c-'0';e--)c=*++s))I(c=='e',s++;e+=pl(&s))*p=s;e<0?v/p10(-e):v*p10(e))
S D pd(Q*p)_(Im=**p=='-';(*p)+=m;(1-2*m)*pdu(p))
S Qs,s0;S I k;S I num(Qs)_(c09(s[*s=='-']))
S A0(pZ,Qp=s;W(*p-'0'<2u,p++)P(*p=='b',Ax=aB(p-s);i(xn,xb=*s++&1)s++;x)
 Ax=oL;W(1,Lv=pl(&s);I(!v&&*s=='N',v=NL;s++)x=apv(x,&v);Qp=pw(s);B(p==s||!num(p))s=p)sqzZ(x))
S A0(pD,Ax=oD;W(1,x=apv(x,(D[]){pd(&s)});Qp=pw(s);B(p==s||!num(p))s=p)x)
S A0(pC,Ax=oC;Cc=*++s;W(c&&c-'"',I(c=='\\',c=*++s;Ii=si("tnr0",c);I(i<4,c="\t\n\r"[i]))x=apc(x,c);c=*++s)P(!c,ep1(x))c=*++s;x)
S C ph()_(Cc=*s;c09(c)?c-'0':c-'a'<6u?c+10-'a':16)
S A0(p0x,Ax=oC;s+=2;W(1,Cc=ph();P(c>15,x)s++;Cd=ph();P(d>15,ep1(x))s++;x=apc(x,c<<4|d))x)
S A0(ps,Qp=s;Cc=*s;I(c>>7,W(*++s<-64)s+=*s==':')J(cAz(c),W(cA9(c),c=*++s))aCm(p,s))
S A0(pS,Ax=oS;W(1,Ay=*s-'"'?ps():Nx(pC());y=str0(y);xq(y(sym(yV)));Qp=pw(s);P(*p-'`',x)s=p+1)0)
S A0(pP,Ax=oS;W(1,Ay=str0(ps());y(xq(sym(yV)));P(*s-'.'||!cAz(s[1]),x)++s)0)
S A px(In)_(Q(n<4u);Ax=aS(n);i(xn,xi='x'+i)x)S A1(p1,xn-1?x:fir(x))S A pb(A,C);
S A0(po,C k0=k;k=1;Q s1=s0,t=s0=s++;Ay;I(*s-'[',y=au)E(s++;y=sqz(N(pb(oA,']')));P(!ytS,ep1(y))P(yN>8,s--;ez1(y)))
 Az=pb(a1(PLH),'}');P(!z,s0=s1;y(0))I(y==au,y=px(k))Ax=N(cpl(aCn(t,s-t),z,y));s0=s1;k=k0;x)
S A pt(C*v)_(Cc=*s;P(c=='`',s++;Ax=N(pS());xn>1?enl(x):x)P(c=='{',po())P(c=='"',p1(N(pC())))
 P(c=='(',s++;P(*s==')',s++;oA)Ax=N(pb(enl(MKL),')'));xn-2?x:las(x))P(c=='[',s++;pb(a1(PLH),']'))
 P(c09(c)&&s[1]==':',I u=s[2]==':';s+=2+u;Ii=20+c-'0';P(i>25,ep0())*v=1;AT(tv-u,i))P(c=='0'&&s[1]=='x',p1(N(p0x())))
 P(num(s)&&(c-'-'||s==s0||(!cA9(s[-1])&&si(")]}\"",s[-1])==4)),L d=0;Qp=s;c=*p;
  W(1,p+=*p==32;B(!num(p))p+=*p=='-';c=*p;B(!cA9(c))W(cA9(c)||c=='.'||c==':',d|=si(".nwe",c)<4;c=*++p))p1(N(d?pD():pZ())))
 P(cAz(c),Qp=s;Ax=pP();I(s-p==1&&c-'y'<2u,k=max(k,c-'w'))AO(p-s0,p1(x)))P(c>>7,Qp=s;Ax=pP();*v=1;AO(p-s0,p1(x)))
 Ii=si("'/\\",c);P(i<3,c=*++s;I h=c==':';s+=h;*v=1;aw+i+3*h)i=si(vc,c);P(i>19,PLH)I u=*++s==':';s+=u;*v=1;AT(tv-u,i))
S A1(pm,Xv(x^au^av)XA(I(xx==aw,x=mut(x);xA[xn-1]=pm(xA[xn-1]))x) //monadify
 Xs(Lv=xv;Qs=qs(&v);Nn;P(*s>>7&&s[(n=Sn(s))-1]-':',Cb[8];Mc(b,s,n);b[n]=':';b[n+1]=0;sym(b))x)x)
S A pT(C*v)_(Ax=N(pt(v));
 W(1,Cc=*s;Ii=si("'/\\[",c);P(i>3,x)s++;
  I(i>2,x=AO(s-1-s0,N(pb(a1(x),']')));I(xn==2,I(xy==PLH,xy=au)E(xx=pm(xx)))*v=0)
  E(I u=*s==':';s+=u;x=a2(aw+i+3*u,x);*v=1))x)
S V pW()_(s=pw(s);Cc=*s;P(c-'/')P(s>s0&&s[-1]-32&&s[-1]-10)W((c=*++s)&&c-10))
S A pe(Ax,C*v)_(pW();P(s>s0&&*s=='\\'&&s[-1]==32,s++;Ay=pe(0,v);P(!y,x?x(0):0);*v=0;y=a2(OUT,y);I(x,y=a2(pm(x),y))y)
 UH o=s-s0;Cb=0;Ay=pT(&b);P(!y,x?x(0):0)P(y==PLH,x?x:y)P(!b,Az=pe(y,v);P(!x,z)Nx(z);*v?a3(aw,x,z):AO(o,a2(pm(x),z)))
 Az=pe(0,v);P(!z,y(x?x(0):0))P(z==PLH,*v=1;P(!x,y)Yu(ep1(x))AO(o,a3(y,x,z)))
 *v&=y!=av;I(!x,y=pm(y))*v?a3(aw,x?AO(o,a3(y,x,PLH)):y,z):AO(o,x?a3(y,x,z):a2(pm(y),z)))
S A pb(Ax,Cc)_(W(1,Cv=0;Ay=Nx(pe(0,&v));I(y==PLH&&c-']',P(c==')',ep2(x,y))y=au)xq(y);B(*s-';'&&*s-10)s++)P(*s-c,ep1(x))s++;x)
A pk(Qp)_(s0=s=p;Ax=pb(a1(PLH),0);P(!x,eQ(s0,Sn(s0),s-s0);0)xn-2?x:las(x))
