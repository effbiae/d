### c compiles k
- it's a front end for [shakti](https://shakti.com/)'s k.edu
- uses shakti's fast k.edu core, a.c, for primitives
### submodule
- [k.edu](https://github.com/effbiae/k.edu) is a mirror of shakti.com/edu/k.zip
### get, build and run
```
$ git clone --recursive https://github.com/effbiae/c.git   #recursive to get the k.edu submodule
$ cd c
$ make
$ ./c
 !3
0 1 2
$ echo '*/1+!3'>t.k
$ ./c t.k
6
```
