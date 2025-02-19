### c compiles k
- c is a front end for [shakti](https://shakti.com/)'s k.edu
- c uses shakti's fast k.edu core, a.c, for primitives
- c replaces k.edu's z.c
### submodules
c uses k.edu and parserclub repos. 
- [k.edu](https://github.com/effbiae/k.edu) is a mirror of shakti.com/edu/k.zip
- [parserclub](https://github.com/kparc/parserclub) has a simple character based k parser
### get, build and run
```
$ git clone --recursive https://github.com/effbiae/c.git   #recursive to get the k.edu and parserclub submodules
$ cd c
$ make
$ c
 !3
0 1 2
$ echo '*/1+!3'>t.k
$ c t.k
6
```
