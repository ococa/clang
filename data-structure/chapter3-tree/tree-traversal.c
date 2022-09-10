#include <stdio.h>

typedef int ElementType;

typedef struct TreeNode *BinTree;
struct TreeNode {
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

typedef struct SNode *Stack;
struct SNode{
	ElementType Data;
	Stack Next;
};

Stack CreateStack();
int IsEmpty(Stack S);
void Push(Stack S,ElementType item);
ElementType Pop(Stack S);


// 前序遍历-递归
void PreOrderTraversal(BinTree BT) {
    if (BT) {
        printf("%d", BT -> Data);
        PreOrderTraversal(BT->Left);
        PreOrderTraversal(BT->Right);
    }
}

// 中序遍历-递归
void InOrderTraversal(BinTree BT) {
    if (BT) {
        InOrderTraversal(BT->Left);
        printf("%d", BT -> Data);
        InOrderTraversal(BT->Right);
    }
}

// 后序遍历-递归
void PostOrderTraversal(BinTree BT) {
    if (BT) {
        PostOrderTraversal(BT->Left);
        PostOrderTraversal(BT->Right);
        printf("%d", BT -> Data);
    }
}

 
/**
 * 中序遍历-非递归 -> 使用堆栈模拟递归
 * 1. 遇到一个节点，压栈，并去遍历他的左子树
 * 2. 左子树遍历结束后，栈顶弹出该节点并且访问该节点
 * 3. 遍历该节点的右子树
 */
void InOrderTraversal2(BinTree BT) {
    BinTree T = BT;
    Stack S = CreateStack();

    while (T || IsEmpty(S)) {
        while (T) { 
            Push(S, T); // 当前节点入栈, 并继续进入栈该节点的左子树
            // print() 放到这里是先序
            T = T->Left; 
        }
        if (!IsEmpty(S)) {
            T = Pop(S); // 节点出栈
            printf("%5d", T->Data); // 访问节点
            T = T->Right; // 转向右子树
        }
    }
}

/**
 * @brief https://zhuanlan.zhihu.com/p/151370981
 */
void PostOrderTraversal2(BinTree BT) {

}

/**
 * 层序遍历 -> 借助队列
 * 1. 根节点入队列。
 * 2. 循环执行（节点出队，访问当前节点，将左右子节点入队列）
 */


int main(int argc, char const argvp[]) {

}


Stack CreateStack(){
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL;
	return S;
}

int IsEmpty(Stack S){
	return (S->Next == NULL);
}

void Push(Stack S,ElementType item){
	Stack tmp;
	tmp = (Stack)malloc(sizeof(struct SNode));
	tmp->Data = item;
	tmp->Next = S->Next;   
	S->Next = tmp;
} 

ElementType Pop(Stack S){
	Stack First;
	ElementType TopVal;
	if(IsEmpty(S)){
		printf("��ջ��");
		return;
	}else{
		First = S->Next;
		S->Next = First->Next;
		TopVal = First->Data;
		free(First);
		return TopVal;
	}
} 