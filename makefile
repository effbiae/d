C=clang-13
F=-g -w -funsigned-char -fno-unwind-tables -mavx512f -mavx512dq -mavx512vbmi
K=-Ofast
all:k.edu a.o z.o c.o d
k.edu:
	echo 'you need to  git clone --recursive https://github.com/effbiae/c.git' && ls k.edu
a.o:k.edu/a.c makefile
	$C $K -c $< $F
z.o:k.edu/z.c makefile
	$C $K -Dmain=zmain -D_start=_zstart -c $< $F
c.o:c.c c.h _.h makefile
	$C -c $< $F
d:d.c a.o z.o c.o
	$C -od $^ $F
g:g.c c.o a.o z.o
	$C -og $^ $F
k:k.edu/?.[ch] makefile
	$C $K -ok k.edu/?.c -nostdlib $F
_.h:
	ln -sf k.edu/_.h _.h
test:
	python3 p.py
	./c<t.in>t.out&&diff t.out t.check
clean:
	rm -f k g g.c *.o _.h t.out -r __pycache__
