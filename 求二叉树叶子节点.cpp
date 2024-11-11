/*
以二叉链表作为存储结构，试写出二叉链表的结构类型定义，并编写求二叉树叶子节点个数的算法
2024/11/11 21:09
*/
#include<iostream>
using namespace std;

typedef struct btnode{
    int data;
    struct btnode* lchild,*rchild;
}*BinTree;

//求二叉树叶子结点个数的算法如下：
int leafnode_num(BinTree bt){
    if (bt==NULL)
        return 0;
    else if(bt->lchild==NULL && bt->rchild==NULL)
        return 1;
    else
        return leafnode_num(bt->lchild)+leafnode_num(bt->rchild);
}










int main(){




    return 0;
}