#include"k.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
S A sl(L v)_(C b[20],*s=b;
 $(v==_0N,*s++='0';*s++='N')
 E($(v<0,v=-v;*s++='-')$(v==_0W,*s++='0';*s++='W')E(UL l=0,t=10;W(t<=(UL)v,t*=10;l++)s+=l;F(l+1,UL k=(UL)v/10,r=(UL)v%10;*s--='0'+r;v=k)s+=l+2))
 aCm(b,s))
S A sd(D v)_(C b[400],*s=b;$(v<0,v=-v;*s++='-')
 $(d2l(v)<<1>>53==-1,*s++='0';*s++=v==_0w?'w':'n')
 E(D p=1,q=10;W(q<=v,p=q;q*=10)W(p>=1,L d=(L)(v/p);v-=d*p;p/=10;*s++='0'+d)*s++='.';F(17,L d=(L)(v/p);v-=d*p;p/=10;*s++='0'+d;$(v==0,B)))
 aCm(b,s))
A1(str0,asrt(xtC);x=room(x,1);xc[xn]=0;x)
A1(str,xtc?enl(x):xts?mR(symstr(gs(x))):xtl?sl(gl(x)):xtd?sd(gd(x)):xto?fir(AT(tX,x)):
 xtu||xtv?atnv(tC,1+(Av(x)>19)+xtu,(C[]){vc[Av(x)],':',':'}):xtw?atnv(tC,1+(Av(x)>2),(C[]){"'/\\'/\\"[Av(x)],':'}):xtt?kst(x):ea1(str,x))
S A kp(A x,I p)_(x=kst(x);p?apc(cat(ac('('),x),')'):x)S O C esc(C c)_(c?"tnr\"\\"[Ci("\t\n\r\"\\",c)]:'0')
S A1(kr,kp(x,                                    xtq||xtr||xtu||xtv||xtw))
S A1(kl,kp(x,xtX||xtC?xn==1:xtT?xn<=1:xtaA||     xtq||xtr||xtu||xtv||xtw))
S A1(ka,kp(x,xtX||xtC?xn==1:xtT?xn<=1:xtaA||xtp||xtq||               xtw))
A1(kst,
 P(x==av_plc,aC(0))
 P(xtl||xtd||xto||xtu||xtv||xtw,str(x))
 P(xtiI,apc(kst(gL(x)),'i'))
 P(xtT&&xn==1,cat(ac(','),kr(fir(x))))
 P(xts,x=str(x);C*s=xc;mr(pS(&s));cat(ac('`'),*s?kst(xn-1?x:fir(x)):x))
 P(xtcC,x=enla(x);I b=0,n=xn,m=n+2;F(n,C c=xci,e=esc(c);$(!C3(32,c,126)&&!e,b=1;B)m+=!!e)A z=aC(b?2+2*n:m);C*s=zc;
  $(b,*s='0';s[1]='x';s+=2;F(n,C c=xci;*s++=hex(c>>4&15);*s++=hex(c&15)))E(*s++='"';F(n,C c=esc(xci);$(c,*s++='\\';*s++=c)E(*s++=xci))*s='"')xr;z)
 P(xtT||xtA,K("{$[(@())=t:@x;(0x28,0x3b/`k'x),0x29;t=@``;$[#x;,/`k'x;\"0#`\"];t=@+`!,,0;\"+\",`k@+x"
               ";#x;0x20/`k'x;(@,0n)=@x;\"0#0n\";(@,0)=@x;\"!0\";\"???\"]}",x))
 P(xta,A z=gkv(&x);cat(apc(kl(x),'!'),kr(z)))
 P(xtq,K(",/`k'.:",x))
 P(xtp,A z=xx;P(xn==3&&(ztv||ztr)&&xy-av_plc&&xz==av_plc,dex(x,cat(kl(mR(xy)),kst(zR))))
       K("{x:`k'. x;@[0x3b/x;#*x;0x5b],0x5d}",x))
 P(xtr,cat(ka(fir(AT(tX,x))),kst(aw(Av(x)))))
 xr;aCz("???"))
A1(out,K("{$[x~(::);x;((@())=@x)&1<#x;1(0x28,0x0a20/`k'x),0x290a;1`k[x],0x0a];x}",x))
