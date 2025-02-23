C=clang-13
F=-g -w -funsigned-char -fno-unwind-tables -mavx512f -mavx512dq -mavx512vbmi
K=-Ofast
u:_.h u.c a.o z.o makefile
	$C -ou u.c a.o z.o $F
a.o:k.edu/a.c makefile
	$C $K -c $< $F
z.o:k.edu/z.c makefile
	$C $K -Dmain=zmain -D_start=_zstart -c $< $F
p.o:p.c makefile
	$C -c $< $F
g:g.c p.o a.o z.o
	$C -og $^ $F
k:k.edu/?.[ch] makefile
	$C $K -ok k.edu/?.c -nostdlib $F
_.h:
	for x in _ a;do ln -sf k.edu/$$x.h $$x.h; done
t.check:
	echo "0 1 2">t.check
test:t.check
	python3 p.py
	echo '!3'|./c>t.out&&diff t.out t.check
clean:
	rm *.o u _.h a.h
