#include"a.h" // ngn/k, (c) 2019-2023 ngn, GNU AGPLv3 - https://codeberg.org/ngn/k/raw/branch/master/LICENSE
NI I mtc_(Ax,Ay/*00*/)_(P(x==y,1)P(xt==yt&&((1<<ti|1<<tc|1<<ts|1<<tu|1<<tv|1<<tw|1<<tx)&1<<xt),xv==yv)P(xtz&&ytz,gl_(x)==gl_(y))
 P(xtZ&&ytZ&&xt-yt&&xn==yn,Ct=max(xt,yt);x=cT[t](xR);y=cT[t](yR);x(y(!memcmp(xV,yV,xn*xW))))P(xt-yt||xtP||(xtr&&xE-yE)||xn-yn,0)
 P(!xtR||(LH(tB,xt,tS)&&xt==yt&&xn==yn),!memcmp(xV,yV,xn*xW))i(xn|!xn,P(!mtc_(xa,ya),0))1)
A2(mtc,/*01*/y(ai(mtc_(x,y))))
S O UL o=(-1ull>>12)-1;S L t(Lv)_(v^(UL)(v>>63)>>1)
S L o1(Lv)_(t(v)+o)A1(of1,Q(xtfF);Ay=an(xn,xt+tl-tf);i(PD(xn,xL),yl=o1(xl))x-y?x(y):y)
S L o0(Lv)_(t(v-o))A1(of0,Q(xtlL);Ay=an(xn,xt-tl+tf);i(PD(xn,xL),yl=o0(xl))x-y?x(y):y)
S I ql(Li,Lj)_(i<j?-1:i>j)I qf(F u,Fv)_(ql(o1(*(L*)&u),o1(*(L*)&v)))I qA(Ax,Ay/*00*/)_(P(mtc_(x,y),0)P(xtf&&ytf,qf(*xF,*yF))P(xtzc&&ytf,qf(gl_(x),*yF))P(xtf&&ytzc,qf(*xF,gl_(y)))
 Iv=TS[xt]-TS[yt];P(v,v)Xzc(ql(gl_(x),gl_(y)))Xf(qf(*xF,*yF))Xs(strcmp(qs(&x),qs(&y)))I(!xtP,Iv=ql(xn,yn);XT(i(min(xn,yn),Az=ii(x,i),u=ii(y,i);I d=qA(z,u);mr(z(u));P(d,d))v))ql(x,y))
S I*ascZ(O UC*v,UC*g,I*a,I*b,In,I w)_(UI c[257];tilV(a,n,2);j(w,Ms(c,0,SZ c);i(n,g[i]=v[w*a[i]+j])i(n,c[g[i]+1]++)I(c[1+*g]-n,i(255,c[i+1]+=c[i])i(n,b[c[g[i]]++]=a[i])SWP(b,a)))a)
S A grdm(Ax/*1*/,A1 f)_(Ay=kv(&x);x(x1(Nx(f(y)))))

S V mrg(Ax/*0*/,I*p,I*q,I*b,I*d,Ik){I*r=p-q+b;W(1,I(qA(xA[*p],xA[*b])<k,*r++=*p++;P(p==q))E(*r++=*b++;B(b==d)))Mc(r,p,q-p<<2);}//merge(k=1),mergeR(k=0)
S V cis(Ax/*0*/,I*p,Nn,I*r){i(n,Ij=0,k=i,v=p[i];Ay=xA[v];W(j<k,Im=j+k>>1;I(qA(y,xA[r[m]])<0,k=m)E(j=m+1))memmove(r+j+1,r+j,i-j<<2);r[j]=v)}//copying_insertionsort
S V cms(Ax/*0*/,I*p,Nn,I*r){P(n<17,cis(x,p,n,r);)Nm=n/2;cms(x,p+m,n-m,r+m);cms(x,p,m,p+m);mrg(x,p+m,p+2*m,r+m,r+n,1);}//copying_mergesort
A1(ascA,Nn=xn;Az=aI(n);I*p=zI;tilV(p,n,2);P(n<17,cis(x,p,n,p);x(z))Nm=n/2;Ay=aI(n-m);I*t=yI;cms(x,p+m,n-m,t);cms(x,p,m,p+n-m);mrg(x,t,t+n-m,p+n-m,p+n,0);x(y(z)))

A1(asc,Xt(opn(x))Xm(grdm(x,asc))XM(K1("{(!#x){x@<y x}/|.+x}",x))XS(asc(str(x)))XF(asc(of1(x)))P(xn-(I)xn,ez1(x))XA(ascA(x))
 x=N(K1("{x-&/x}",x));Nn=xn;Ay=aC(n),z=aI(n),u=aI(n);xe(ye(ascZ(xV,yV,zV,uV,n,xW)==zV?u(z):z(u))))
A1(dsc,XMT(x=rev(asc(rev(x)));sub(ai(xN-1),x))Xm(grdm(x,dsc))Xz(cls(gl(x)))et1(x))
A1(grp,Xz(K1("{$[x;@[&x;;:;1]'!x;0 0#0]}",x))Xt(et1(x))Xm(Ay=kv(&x);y=Nx(grp(y));yy=x(i1(x,yy));y)K1("{$[#x;(x[(!0),*'g])!g@:<g:(&(!0),~x~':x i)_i:<x;x!0#,!0]}",x))
