C=clang-13
a.o:k.edu/a.c
	$C -Ofast -oa.o -c k.edu/a.c -nostdlib -s -w -march=icelake-client -funsigned-char -fno-unwind-tables -mavx512f -mavx512dq -mavx512vbmi
	cd k.edu;for x in _ a;do ln $x.h k.edu/$x.h; done
t.o:parserclub/t.c
	cd parserclub;$C -O -Dmain=tmain -o../t.o t.c&&ln t.h ../t.h
c:t.o c.c
	$C -O -c c.c;$C -oc t.o c.o
t.k:
	echo "!3">t.k
t.check:
	echo "0 1 2">t.check
t:c a.o t.k
	./c t.k>t.c&&$C -O -o t t.c&&./t>t.out&&diff t.out t.check
