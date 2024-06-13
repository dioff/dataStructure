#include "stdio.h"

void arr_point(){
    char str[] = "Hello world";
    char * p = str;  // str:储存数组第一个位置的指针
    printf("[What is in str]:%c\n", *p);

    for (int i = 0; i < 4; ++i) {
        printf("Loops the str for 1 to 4: %c\n", *(p + i));
    }
}

// maybe we can try the str[i] equal (p + i) is true
void compare(){
    int arr[] = {1, 3, 4, 5, 7};
    int * p = arr;
    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        if(arr[i] == *(p + i)){
            printf("The %d is right\n", i);
        } else{
            printf("Not equal\n");
            break;
        }
    }
}