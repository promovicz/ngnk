#include"a.h" // ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - https://bitbucket.org/ngn/k/raw/master/LICENSE
S C*s;S A0 jv;S C jw()_(W(si(" \n\t\r",*s)<4,++s)*s)
S A0(jd,Im=*s=='-';s+=m;Cc=*s++;P(!dgt(c),0)Dv=c-'0';W(dgt(*s),v*=10;v+=*s++-'0')Y(*s=='.',s++;D t=1;W(dgt(*s),t/=10;v+=(*s++-'0')*t))
 Y((*s|32)=='e',s++;s+=*s=='+';L e=pl(&s);D t=10;Y(e<0,e=-e;t=.1)P(e>308,0)F(e,v*=t))ad(m?-v:v))
S A1(ju,Iv=0;F(4,Cc=*s++;v=16*v+(dgt(c)?c-'0':c3('a',c|32,'f')?(c|32)-'a'+10:99999);P(v<0,s--;0))
 P(v<128,apc(x,v))P(v<2048,x=apc(x,192|v>>6);apc(x,128|63&v))x=apc(x,224|v>>12);x=apc(x,128|63&v>>6);apc(x,128|63&v))
S A0(js,s++;Ax=aC(0);W(1,C*t=s;Cc=*s++;W(c-'"'&&c-'\\'&&c>31,c=*s++)P(c<32,s--;xr;0)x=catc(x,t,s-1-t);P(c=='"',x)c=*s++;
                         Ii=si("\"\\/bfnrtu",c);P(i>8,xr;s--;0)x=i<8?apc(x,"\"\\/\b\f\n\r\t"[i]):ju(x);t=s)0)
S A0(ja,s++;Ax=a0();P(jw()==']',s++;x)W(1,x=apd(x,Nx(jv()));P(*s==']',s++;x)Nx(*s==',');s++)0)
S A0(jo,s++;Ax=am(aS(0),a0());Cc=jw();P(c=='}',s++;x)
 W(1,Nx(c=='"');xx=apd(xx,gS(Nx(js())));Nx(jw()==':');s++;xy=apd(xy,Nx(jv()));P(*s=='}',s++;x)Nx(*s==',');s++;c=jw())0)
S A jr(OC*t,Lv)_(Cc;W((c=*t++),P(c-*s,0)s++)al(v))
S A0(jv,Cc=jw();Ax=c=='['?ja():c=='{'?jo():c=='"'?js():c=='-'||dgt(c)?jd():c=='t'?jr("true",1):c=='f'?jr("false",0):c=='n'?jr("null",NL):0;jw();x)
A1(jsr,et(!xtcC,x)x=str0(enla(x));s=xc;Au=jv();Y(u&&*s,ur;u=0)P(!u,eS(x,s-xc);err("json"))xr;u)
A1(jsw,en(1);0)
