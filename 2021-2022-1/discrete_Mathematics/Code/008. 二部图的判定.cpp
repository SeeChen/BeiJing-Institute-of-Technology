/*
题目：判断无向图G是否为二部图
输入：
正整数n，代表无向图G的阶数；
随后的n行代表G的邻接矩阵，每行有n个数据，每个数据以空格分隔。其中每个数据表示顶点vi邻接顶点vj边的条数。
输出：
若为树，输出yes；
否则，输出no。
*/
#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int G[MAX][MAX];
int color[MAX];
int n;

int DFS(int x){
	int i;
	
	queue <int> q;
	q.push(x);
	
	color[x] = 1;
	
	while (!q.empty()){
		for (i = 0; i < n; i++){
			if (G[q.front()][i] && color[i] == 0){
				q.push(i);
				color[i] = -color[q.front()];
			}
			if (G[q.front()][i] && color[q.front()] == color[i])
				return 0;
		}
		q.pop();
	}
	
	return 1;
}

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &G[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		if(!color[i] && !DFS(i)){
			printf("no\n");
			return 0;
		}
	}
	printf("yes\n");
	return 0;
}