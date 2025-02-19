### c compiles k
- c is a front end for [shakti](https://shakti.com/)'s k.edu
- c uses shakti's fast k.edu core for primitives
- replaces z.c

```
$ git clone --recursive https://github.com/effbiae/c.git   #recursive to get the k.edu and parserclub submodules
$ make
$ c
 !3
0 1 2
```
### submodules
c uses k.edu and parserclub submodules. 
- [k.edu](https://github.com/effbiae/k.edu) is a mirror of shakti.com/edu/k.zip
- [parserclub](https://github.com/kparc/parserclub) has a simple character based k parser
