#include "stdio.h"

void swap(int a, int b){
    int tmp = a; // 临时变量存储a的值
    a = b;
    b = tmp;
}

void swap_point(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}