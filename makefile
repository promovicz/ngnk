#faster builds: export MAKEFLAGS=-j8
M=mkdir -p $(@D)

0:;$(MAKE) k-dflt && $(MAKE) t #default target
t:o/t;o/t;dy/a.sh;cd g;./a.k;cd -;for i in $$(seq 22 -1 15);do aoc/$$i/a.sh;done;e/a.sh #test
c:;rm -rf o k libk.a libk.so #clean
k:k-dflt
w:k o/w/fs.h o/w/k.wasm o/w/index.html $(patsubst w/x/%.k,o/w/x/%.k,$(wildcard w/x/*.k))
h:w o/w/http;cd o/w;./http

k-dflt:; $(MAKE) a N=$@ R=k  O='-g -O3 -march=native -Dlibc'                L='-lm'
libk.a:; $(MAKE) s N=$@ R=$@ O='-g -O3 -march=native -Dlibc -Dshared'       L='-lm'
libk.so:;$(MAKE) a N=$@ R=$@ O='-g -O3 -march=native -Dlibc -fPIC -Dshared' L='-lm -shared'

A=$(patsubst %.c,o/$N/%.o,$(wildcard *.c))
o/$N/%.o:%.c *.h;$M;$(CC) @opts $O -o $@ -c $<
o/$N/bin:$A;$(CC) $O -o $@ $^ @lopts $L # ;$(STRIP) -R .comment $@ -R '.note*'
a:o/$N/bin;cp o/$N/bin $R
s:$A;rm -f $R;ar rcs $R $A

o/t:t/t.c;$(CC) $< -o $@ -Wall -Wno-unused-result -Werror
o/asm/%.s:%.c *.h;$M;$(CC) -O3 @opts -march=native -nostdlib -ffreestanding -c $< -o $@ -S -masm=intel

#/usr/lib/llvm-10/bin/wasm-ld must be on $PATH
O_WASM=@opts -Oz -nostdlib -ffreestanding --target=wasm32 -U __SIZEOF_INT128__ -Dwasm -I/usr/include
o/w/%.o:%.c *.h o/w/fs.h;$M;clang $(O_WASM) -o $@ -c $<
o/w/k.wasm0:$(patsubst %.c,o/w/%.o,$(wildcard *.c));clang $(O_WASM) -o $@ $^\
 -Wl,--export=main,--export=kinit,--export=kargs,--export=rep,--export=open,--export=close,--export=write,--export=evs\
 -Wl,--export=__heap_base,--no-entry,--initial-memory=33554432,--allow-undefined
o/w/k.wasm:o/w/k.wasm0;wasm-opt -Oz $< -o $@ && ls -l $@
o/w/fs.h:repl.k LICENSE|k w/fs.k;$M;./k w/fs.k $^ >$@
o/w/x/%.k:w/x/%.k;$M;ln -f $< $@
o/w/index.html:w/index.html k w/inl.k w/*.js;$M;cd w && ./inl.k index.html *.js >../$@ && cd -
o/w/http:w/http.c;$(CC) $< -o $@

# O_32=@opts -m32 -Dlibc
# o/32/%.o:%.c *.h;$M;$(CC) $(O_32) -o $@ -c $<
# k32:$(patsubst %.c,o/32/%.o,$(wildcard *.c));$(CC) $(O_32) -o $@ $^ -lgcc -lm

.PHONY: 0 t c k w h a s k-dflt
