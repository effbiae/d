#include"_.h"
#define r1(x) k_(1,x)
#define r0(x) k_(0,x)
U k(i2,U,U),k_(i2,U),tn(i2,i2);
typedef U(*uf)(U),(*uF)(U,U);
U scan(uF,U);U over(uF,U);U each(uf,U);U niters(uf,i2,U);
