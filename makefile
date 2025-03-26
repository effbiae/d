C=clang-13
F=-g -funsigned-char -fno-unwind-tables -mavx512f -mavx512dq -mavx512vbmi -Wno-multichar -Wno-parentheses -Wno-incompatible-pointer-types -Wfatal-errors -Wno-return-type
K=-Ofast -fno-builtin -nostdlib
all:k.edu a.o z.o c.o d
k.edu:
	echo 'you need to  git clone --recursive https://github.com/effbiae/c.git' && ls k.edu
a.o:k.edu/a.c makefile
	$C $K -c $< $F
z.o:k.edu/z.c makefile
	$C $K -Dmain=zmain -D_start=_zstart -c $< $F
c.o:c.c c.h _.h k.h makefile
	$C -c $< $F
d:d.c a.o z.o c.o
	$C -od $^ $F
t:t.c a.o z.o c.o
	$C -ot $^ $F
g:g.c c.o a.o z.o
	$C -g -og $^ $F -Wno-unused-value
h.so:h.c
	$C -g -shared -oh.so -fPIC $< $F -Wno-unused-value
k:k.edu/?.[ch] makefile
	$C $K -ok k.edu/?.c -nostdlib $F
k.h:
	ln -sf k.edu/k.h k.h
_.h:
	ln -sf k.edu/_.h _.h
test: d
	python3 p.py
	./c<t.in>t.out&&diff t.out t.check
	./d
clean:
	rm -f k t d g g.c *.o _.h k.h t.out -r __pycache__
