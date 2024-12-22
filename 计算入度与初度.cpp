/*
编写函数void inDegree(adjMatrix g,int id[])
和void outDegree(adjMatrix g,int od[])，
分别求邻接矩阵所代表的图g的每个顶点的入度和出度，
结果分别存在id和od 中，并分析算法的时间复杂度和空间复杂度。
分别考虑无向图和有向图两种情况
*/

#include<iostream>

using namespace std;

#define MAX_VERTICES 100

//定义了一个邻接矩阵类型adjMatrix
typedef
int adjMatrix [MAX_VERTICES][MAX_VERTICES];

//计算入度-有向图
void inDegree(adjMatrix g,int id[],int n) {
	//初始化入度数组id[]
	for(int i=0; i<n; ++i)
		id[i]=0;

	//遍历邻接矩阵计算入度
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(g[j][i]==1)
				id[i]++; 
		}
	}
}

//计算出度-有向图
void outDegree(adjMatrix g,int od[],int n) {
	//初始化入度数组od[]
	for(int i=0; i<n; ++i)
		od[i]=0;

	//遍历邻接矩阵计算入度
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(g[i][j]==1)
				od[i]++; 
		}
	}
}




int main() {
	int n=4;  //图的顶点数
	adjMatrix g={{0,1,0,0},
				 {0,0,1,1},
				 {1,0,0,0},
				 {0,1,0,0}}; //有向图
				 
	int inDeg[MAX_VERTICES],outDeg[MAX_VERTICES];
	
	//计算入度
	inDegree(g,inDeg,n);
	//计算出度
	outDegree(g,outDeg,n); 
	
	//输出入度
	cout<<"In-degree:";
	for(int i=0;i<n;++i){
		cout<<inDeg[i]<<" ";
	}
	cout<<endl;
	
	//输出出度
	cout<<"out-degree:";
	for(int i=0;i<n;++i){
		cout<<outDeg[i]<<" ";
	}
	cout<<endl;
	
	
	
	return 0;
}











