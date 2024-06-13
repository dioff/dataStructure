#include "SqList.h"



int main(){
    SqList list ; // 声明结构体
    // 初始化线性表
    if(InitList(&list)){
        printf("=============================================\n");
        InsertList(&list, 666, 1);
        InsertList(&list, 777, 2);
        InsertList(&list, 888, 3);
        InsertList(&list, 999, 4);
        PrintList(&list);
        GetElem(&list, 2);
        int index = LocateElem(&list, 888);
        printf("888在第%d个位置上", index);


    } else{
        printf("顺序表初始化失败");
    }
    // 销毁表
    DestroyList(&list);
}

