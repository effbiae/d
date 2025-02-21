C=clang-13
c:a.o t.o c.c makefile
	$C -O -oc t.o c.c
a.o:k.edu/a.c makefile
	$C -Ofast -oa.o -c $< -nostdlib -s -w -march=icelake-client -funsigned-char -fno-unwind-tables -mavx512f -mavx512dq -mavx512vbmi
	cd k.edu;for x in _ a;do ln -s $$x.h ../$$x.h; done
t.o:parserclub/t.c makefile
	$C -O -Dmain=tmain -c ot.o $<&&ln parserclub/t.h t.h
t.k:
	echo "!3">t.k
t.check:
	echo "0 1 2">t.check
test:c t.k t.check
	./c t.k>t.out&&diff t.out t.check
