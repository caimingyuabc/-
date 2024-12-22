/*
编写函数int ccn_dfs(adjMatrix g),利用DFS算法计算利用
邻接矩阵表示的图g的连通分量的数量，结果作为返回值
*/

#include<iostream>
#include<vector>
using namespace std;

//深度优先搜索DFS函数，用于访问从节点 node出发的所有连通节点
void DFS(int node,const vector<vector<int> >&g,
         vector<bool>& visited) {
	visited[node]=true;
	//遍历当前节点的所有邻接节点
	for(int i=0; i<g.size(); ++i) {
		if(g[node][i]==1&& !visited[i]) {
			DFS(i,g,visited);
		}
	}
}


//计算图的连通分量的函数
int ccn_DFS(const vector<vector<int> >&g) {
	int n=g.size(); //图的节点数
	vector<bool> visited(n,false);
	//记录连通分量的数量
	int componentCount=0;
	//遍历图中的每一个节点
	for(int i=0; i<n; ++i) {
		if(!visited[i]) {
			DFS(i,g,visited);
			++componentCount;
		}
	}
	return componentCount;
}






int main() {
    // 示例：图的邻接矩阵（无向图），通过构造函数初始化
    vector<vector<int> > g(5, vector<int>(5, 0));  // 创建一个 5x5 的邻接矩阵，初始值全为 0
    
    // 手动填充邻接矩阵
    g[0][1] = g[1][0] = 1;
    g[1][2] = g[2][1] = 1;
    g[2][3] = g[3][2] = 1;
    
    // 节点 4 孤立，没有连边
    // g[4][4] = 0  // 默认是0， 不需要显式赋值
    
    // 调用 ccn_dfs 函数计算连通分量的数量
    int result = ccn_DFS(g);
    
    // 输出计算结果
    cout << "连通分量数量: " << result << endl;  // 输出结果

	return 0;
}


