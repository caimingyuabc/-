/*
编写函数bool strong_connected(linkList g),
判断图g是否是强连通图，如果是，返回true，否则返回false。
使用kosaraju算法求g的强连通分量，如果超过1个强连通分量，
则图g不是强连通图
*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//定义邻接链表类型
struct Node {
	int data;
	int v; //顶点数
	Node* next;
};

class Graph {
	public:
		vector<Node*> adjList;

		//构造函数
		Graph(int v) {
			adjLis
			adjList.resize(v,NULL); //初始化每个顶点的邻接链表为空
		}

		//向图中添加一条边
		void addEdge(int u,int v) {
			Node* newNode=newNode;
			newNode->next=adjList[u];
			newNode->data=v;
			adjList[u]=newNode; //将新节点插入链表头部
		}

		//DFS
		void DFS(int v,vector<bool>& visited,stack<int>& finishStack) {
			visited[v]=1;
			Node* adj=adjList[v];
			//对数组中的第一条链表操作 
			while(adj!= NULL){
				if(!visited[adj->v])
					DFS(adj->v,visited,finishStack);
			}
			adj=adj->next;
		}
		finishStack.push(v);
};






int main() {






	return 0;
}


