/*
ADT 顺序结构的线性表（List）
Data
Operation
    InitList(*L); //初始化操作，建立一个空的线性表L。
    ListEmpty(L);//若线性表为空，返回TRUE，否则返回FALSE。
    CleanList(*L); //将线性表清空。
    GetElem(L,i,*e); //将线性表L中的第i个位置元素值返回给e
    LocateElem(L,e);//在线性表L中查找与给定值e相等元素，如果成功返回该元素在表中序号表示成功，否则，返回0表示失败。
    ListInsert(*L,i,e); //在线性表L中第i个位置插入新元素e.
    ListDelete(*L,i,*e); //删除线性表L中第i个位置元素，并用e返回其值。
    ListLength(L); //返回线性表L的元素个数
*/

#include <stdio.h>
#define LIST_MAX_SIZE  10;
#define ERROR 0;
#define OK 1;
typedef int  ElemType;
typedef struct ElemDataStruct
{
    /* data */
    ElemType elem;
    int index;
} ElemDataItem;

struct ElemDataItem elemList[LIST_MAX_SIZE];

int InitList(struct ElemDataItem *L){
    if(L==NULL){
        return ERROR;
    }

    for(int i =0;i<LIST_MAX_SIZE; i++){
        (L+i)->elem=10;
        (L+i)->index=i;
    }

    return OK;
}

int main(){
    InitList(elemList);
}