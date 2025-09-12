#include "b_pow.h"
extern int32_t b_pow(int32_t op1,int32_t op2) {
    int i=0,val = 1;
    for(i = 0;i < op2;i++) {
        val = val * op1;
    }
    return val;
}