#include"k.h" // ngn/k, (c) 2019 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
A1(str0,asrt(xtC);x=room(x,1);xc[xn]=0;x)A1(str,!xtt?ea1(str,x):xtc?enl(x):xts?mR(symstr(gs(x))):kst(x,aC(0)))
S A sl(L v,A y)_(asrt(Ar(y)==1);y=room(y,20);C*s=yc+yn;
 $(v==_0N,*s++='0';*s++='N')
 E($(v<0,v=-v;*s++='-')$(v==_0W,*s++='0';*s++='W')E(UL l=0,t=10;W(t<=(UL)v,t*=10;l++)s+=l;F(l+1,UL k=(UL)v/10,r=(UL)v%10;*s--='0'+r;v=k)s+=l+2))
 AN(s-yc,y))
S A sd(D v,A y)_(asrt(Ar(y)==1);y=room(y,400);C*s=yc+yn;$(v<0,v=-v;*s++='-')
 $(d2l(v)<<1>>53==-1,*s++='0';*s++=v==_0w?'w':'n')
 E(D p=1,q=10;W(q<=v,p=q;q*=10)W(p>=1,L d=(L)(v/p);v-=d*p;p/=10;*s++='0'+d)*s++='.';F(17,L d=(L)(v/p);v-=d*p;p/=10;*s++='0'+d;$(v==0,B)))
 AN(s-yc,y))
#define h(x)  (y=cat(y,x))
#define hs(s) (y=catc(y,s,ZZ(s)-1))
#define hc(c) (y=apc(y,c))
#define hx(x) (y=kst(x,y))
S A ksp(A x,A y,I p)_($(p,hc('('))hx(x);$(p,hc(')'))y)S O C esc(C c)_(F(6,P(c=="\t\n\r\"\\"[i],"tnr\"\\0"[i]))0)
S A2(ksr,ksp(x,y,                                    xtq||xtr||xtu||xtv||xtw))
S A2(ksl,ksp(x,y,xtX||xtC?xn==1:xtT?xn<=1:xtaA||     xtq||xtr||xtu||xtv||xtw))
S A2(kso,ksp(x,y,xtX||xtC?xn==1:xtT?xn<=1:xtaA||xtp||xtq||               xtw))
A2(kst,P(xtl,sl(gl(x),y))P(xtiI,apc(kst(gL(x),y),'i'))P(xt==tdx,sd(gd(x),y))P(xtT&&xn==1,ksr(fir(x),apc(y,',')))
 P(xts,hc('`');x=symstr(gl(x));C*s=xc;mr(pS(&s));*s?hx(xn-1?xR:ac(*xc)):catc(y,xc,xn))
 P(xtcC,x=enla(x);I b=0,n=xn,m=n+2;F(n,C c=xci,e=esc(c);$((c<32||126<c)&&!e,b=1;B)m+=!!e)A z=aC(b?2+2*n:m);C*s=zc;
  $(b,*s='0';s[1]='x';s+=2;F(n,C c=xci;*s++=hex(c>>4&15);*s++=hex(c&15)))E(*s++='"';F(n,C c=esc(xci);$(c,*s++='\\';*s++=c)E(*s++=xci))*s='"')
  h(z);xr;y)
 P(xtT,$(xtX,hc('('))
       $(xn,C c=xtX?';':xtS?0:32;F(xn,$(i&&c,hc(c))y=kst(get(x,i),y)))E$(xtL||xtI,hs("!0"))E$(xtD,hs("0#0n"))E$(xtS,hs("0#`"))
       $(xtX,hc(')'))xr;y)
 P(xtaA,$(xtA,hc('+'))A z=gkv(&x);ksr(z,apc(ksl(x,y),'!')))P(xto,h(fir(AT(tX,x))))P(xtq,A z=gkv(&x);hx(x);hx(z);y)
 P(xtp,A z=xx;$(xn==3&&(ztv||ztr)&&xy-cv_plc&&xz==cv_plc,y=ksl(mR(xy),y);hx(zR))
              E(hx(zR);I i=1;W(i<xn,hc(";["[i==1]);$(xai-cv_plc,hx(mR(xai)))i++)hc(']'))xr;y)
 P(xtu||xtv,I v=Av(x);$(v<20,hc(vc[v]))E($(v>=30,hc('1'))hc('0'+(v-20)%10);hc(':'))$(xtu,hc(':'))y)
 P(xtr||xtw,$(xtr,y=kso(fir(AT(tX,x)),y))I v=Av(x);hc("'/\\"[v%3]);$(v>2,hc(':'))y)
 xr;hs("???");y)
A1(out,A y;P(x==cu0,x)$(xtX&&xn>1,y=aCn("(",1);F(xn,$(i,hs("\n "))hx(mR(xai)))hs(")\n"))E(y=kst(xR,aC(0));hc(10))yr;write(1,yc,yn);x)
