## 树的实现 
1. 数组实现
2. 链表实现
    - 节点结构：element, linked child, linked child, linkedChild (会有结构上的浪费)
3. 儿子兄弟表示法
    - 节点结构: element, first child, nextSlibing
#当一个树用儿子兄弟表示法表示之后可以形成二叉树#

## 特殊的二叉树
1. 斜二叉树
2. 完美二叉树
3. 完全二叉树

## 二叉树的性质
1. 第i层最大节点数是2^(i -1)。
2. 深度为k的二叉树最大结点总数是2^k - 1。
3. 对任何非空二叉树，有两个子节点的节点 + 1 等于叶节点的个数。（n2 + 1 = n0）
    - 叶节点n0， 一个子节点的节点为n1， 两个子节点的结点为n2 -->  n0 + n1 + n2 -1 == 0 * n0 + 1*n1 + 2*n2 --> n0 -1 = n2;

## 二叉树的类型定义
### 操作集
1. Boolean isEmpty 判断是否为空
2. void traversal 遍历
    - 先序 （根，左，右）
    - 中序 （左，根，右）
    - 后序 （左，右，根）
    - 层序 （从上到下，从左到右）
3. createBintree 创建

## 二叉树的存储结构
1. 顺序存储结构
    - 完全二叉树（按照从上到下，从左到右编号顺序存储，n个节点的完全二叉树结点父子关系）
        1. 非根节点i。父节点的序号是 i/2
        2. 节点i的左孩子 2i，右孩子2i + 1。（2i和2i+1 <= n，否则没该孩子）
    - 一般的二叉树也可以，需要用空缺补齐。会造成空间浪费
2. 链表
```
typedef struct TreeNode *BinTree;
struct TreeNode {
    ElementType Data;
    BinTree Left;
    BinTree Right;
};
```

## 二叉树的遍历
