C=clang-13
c:a.o makefile
a.o:k.edu/a.c makefile
	$C -Ofast -oa.o -c $< -nostdlib -s -w -march=icelake-client -funsigned-char -fno-unwind-tables -mavx512f -mavx512dq -mavx512vbmi
	cd k.edu;for x in _ a;do ln -sf $$x.h ../$$x.h; done
t.k:
	echo "!3">t.k
t.check:
	echo "0 1 2">t.check
test:t.k t.check
	python3 p.py
	./c t.k>t.out&&diff t.out t.check
