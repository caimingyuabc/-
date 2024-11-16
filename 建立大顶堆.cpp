/*
将完全二叉树转化为大顶堆
*/

#include<iostream>
using namespace std;

void heap_adjust(int heap[],int n,int cur){     //对单个根进行向下过滤
    int i,tmp=heap[cur];                        //cur表示当前子树的根节点
    while(i=2*cur+1,i<n){                       //i为cur的左孩子
        if(i+1<n&&heap[i+1]>heap[i])
            i++;
        if(heap[i]<=tmp)
            break;
        heap[cur]=heap[i];                      //节点i的值上浮到父节点
        cur=i;                                  //更新cur,向下继续heap_adjust
    }
    //heap[cur]根节点的值更像是挤下去
    heap[cur]=tmp;
}

//将数组heap的前n个元素所构成的完全二叉树转化为二顶堆
void heap_make(int heap[],int n){
    for(int i=n/2-1;i>=0;i--){
        heap_adjust(heap,n,i);
    }

}





















