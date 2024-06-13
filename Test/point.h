#include "stdio.h"

void point(){
    int a = 10;
    int * p = &a;
    printf("a在内存中的地址是: %p, 值为 %d", p, *p);
}