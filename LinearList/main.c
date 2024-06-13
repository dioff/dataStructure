#include "SqList.h"

int main(){
    struct SqList list ; // 声明结构体
    // 初始化线性表
    if(InitList(&list)){
        printf("=============================================\n");
        InsertList(&list, 666, 1);
        InsertList(&list, 777, 1);
        InsertList(&list, 888, 3);
        InsertList(&list, 999, list.length + 1);
        PrintList(&list);
    } else{
        printf("顺序表初始化失败");
    }
    DeleteList(&list, 2);
    PrintList(&list);
    // 销毁表
    DestroyList(&list);
}

