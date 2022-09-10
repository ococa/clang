#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 11

typedef int ElementType;
// typedef int Position;

struct LNode
{
	ElementType Data[MAXSIZE];
	// Position Last;
    int Length; /* 保存线性表中最后一个元素的位置 */
};

typedef struct LNode *List;

List CreateList();

int BinarySearch(List Tbl, ElementType K) {

    int left, right, mid, notFount = -1;
    left = 1;
    right = Tbl -> Length;
    while (left <= right 
        && (left + right) / 2 != mid // 防止 (left + right) / 2 = left或者right 导致无限循环
    ) {
        mid = (left + right) / 2;
        if (K > Tbl -> Data[mid]) {
            left = mid;
        } else if (K < Tbl -> Data[mid]) { 
            right = mid;
        } else { // k == data[mid]
            return mid;
        }
    }

    return notFount;
}

int main() {
    printf("hello world\n");
    
    List list;
    list = CreateList();
    for (int i = 0; i < (MAXSIZE); i++) {
        list->Data[i] = i * 2;
        list->Length += 1;
    }

    for (int i = 0; i < MAXSIZE; i++) {
        printf("i[%d]: --%d--\n", i, list->Data[i]);
        /* code */
    }
    
    int position = BinarySearch(list, 10);
    int position2 = BinarySearch(list, 222);
    
    printf("position of list is %d\n", position);
    printf("position2 of list is %d\n", position2);

    return 0;
}

int test() {

}

List CreateList() {
    List l;
    l = (List)malloc(sizeof(l));
    l -> Length = 0;
    return l;
}