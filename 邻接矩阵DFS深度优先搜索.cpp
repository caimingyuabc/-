/*
编写函数使用邻接矩阵实现图g的顶点st出发，
利用递归算法对图g进行深度优先搜索，并同时求出DFS序列
*/

#include<iostream>
#include<vector>
using namespace std;

typedef vector<vector<int> > adjMatrix;

//深度优先算法 DFS
void DFS(int st,adjMatrix& g,vector<bool>& visited,vector<int>& dfsOrder) {
	//第一层递归开始
	visited[st]=1;
	dfsOrder.push_back(st); //记录DFS序列
	int n=g.size();  //顶点数

	//对当前顶点的每个邻接点进行递归
	for(int i=0; i<n; ++i) {
		if(g[st][i]==1&&!visited[i]){
			DFS(i,g,visited,dfsOrder);
		}
	}
}

int main(){
	
	
	return 0;
}

