/*
AVL树插入节点   时间复杂度为O(logn) 
*/

#include<iostream>
using namespace std;

//LL旋转,返回根节点 
avlTree LL(avlTree A){
	
} 


//# avl树的节点定义
typedef struct avlNode {
	int key;
	int h;  //当前树的高度
	avlNode *lc,*rc;
	avlNode():h(1),lc(NULL),rc(NULL) {
	}
}*avlTree;

//# 获取子树高度
int avl_height(avlTree avl) {
	return (avl==NULL ? 0 : avl->h);
}


//# 插入节点
bool avl_insert(avlTree& t,int k) {
	//当t为空树时
	if(t==NULL) {
		t=new avlNode;
		t->key=k;
		return true;
	}

	//插入节点位于t的左子树
	if(k<t->key) {
		avl_insert(t->lc,k);
		//回退时检查t子树是否平衡
		if(avl_height(t->lc)-avl_height(t->rc)>1) {
			if(t->lc->key>k) t=RR(t);
			else t=LR(t);
		}
	}
	//插入节点位于t的右子树
	else if(k>t->key) {
		avl_insert(t->rc,k);
		//回退时检查t子树是否平衡
		if(avl_height(t->rc)-avl_height(t->lc)>1) {
			if(t->rc->key<k) t=RR(t);
			else t=RL(t);
		}
	}
	else
		return false;
		
	t->h=max(avl_height(t->lc),avl_height(t->rc))+1;   //更新高度 
}




int main() {


	return 0;
}


