#include "hello.h"
#include "point.h"
#include "arr.h"

int main(){
    int a = 10, b = 20;
    swap(a, b);

    printf("[Use the swap function]: a = %d, b = %d\n", a, b);

    swap_point(&a, &b);
    printf("[Use the swap_point function]: a = %d, b = %d\n", a, b);

    arr_point();

    compare();
}
