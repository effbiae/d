### c compiles k
- it's a front end for [shakti](https://shakti.com/)'s k.edu
- uses shakti's k.edu core for primitives
### get, build and run
```
$ git clone --recursive https://github.com/effbiae/c.git   #recursive to get the k.edu submodule
$ cd c
$ make
$ ./c
 !3
0 1 2
 @'9(+\|:)\2#1
1 1 2 3 5 8 13 21 34 55
```
### limitations
- tokens are single characters except for monadic verbs
- implemented adverbs
 - iterate nf\x  eg. `3%:\3`
 - each  f'x  eg. `!:'!3`
 - scan in a train  eg. `9(+\|:)\2#1`
