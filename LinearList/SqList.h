#include "stdio.h"
#include "stdlib.h"

#define InitSize 10 // 定义初始顺序表大小

typedef int Element;

struct SqList {
    Element * data; // 动态的分配顺序表的指针
    int length;  // 顺序表的表长
    int MaxSize;
};

typedef struct SqList * SqNode; // 将顺序表的指针变量命名为SqNode

_Bool InitList(SqNode list) // 初始化顺序表
{
    list->data = (Element *)malloc(sizeof(Element) * InitSize);
    if (list->data == NULL) return 0;
    list->length = 0;
    list->MaxSize = InitSize;
    for (int i = 0; i < InitSize; ++i) {
        list->data[i] = 0; // 防止内存污染
    }
    return 1;
}

void IncreaseList(SqNode list, int len) // 增加表长
{
    int *p = list->data; // *p指向的地址和顺序表的首地址是一样的
    list->data = (Element *) malloc((list->MaxSize + len)*sizeof(int));//新申请一片空间
    for (int i = 0; i < list->length; i++)
        list->data[i] = p[i]; // 把值一个个复制过去
    list->MaxSize += len; // 顺序表最大长度增加len
    free(p); // 释放空间
}

void InsertList(SqNode list, Element e, int index)  // 在顺序表list的index位置插入数据e
{
    for (int i = list->length; i > index - 1; --i) {
        list->data[i] = list->data[i - 1];
    }
    list->data[index -1] = e;
    list->length++;
}

_Bool GetElem(SqNode list, int index)  // 查询顺序表list的index位置元素
{
    if (index < 1 || index > list->length) // 判断是否超出
        return 0;
    printf("第%d个位置是%d", index, list->data[index - 1]);
    return 1;
}

_Bool DeleteList(SqNode list, int index) // 删除顺序表的index元素
{
    if (index < 1 || index > list->length) // 判断元素下标是否越界
        return 0;
    if (!list->data)//判断是不是空表
    {
        printf("空表\n");
        return 0;
    }
    int e = list->data[index - 1];
    for (int j = index; j <= list->length; j++)
    {
        list->data[j-1] = list->data[j];
    }
    list->length--;//表长-1
    printf("删除的元素是%d，这个元素的位置是%d\n", e, index);
    return 1;
}

void PrintList(SqNode list)  // 打印表内元素
{

    for (int i = 0; i < list->length; ++i) {
        printf("Sqlist[%d] = %d\n", i, list->data[i]);
    }
}

void DestroyList(SqNode list) // 销毁顺序表
{
    list->length = 0;
    list->MaxSize = 0;
    free(list->data);
    printf("表已销毁");
}



