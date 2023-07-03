/*
题目：判断一个图是否为强连通图、单向连通图、弱连通图。输入为有向图的邻接矩阵。
输入
第一行为正整数N（0<N<=100），代表图中点的个数。
接下来N行，每行有N个数据，每个数据以空格分隔，代表邻接矩阵。
注意：输入的都是连通图。
输出
输出有一行，字母A，B，C
A代表强连通图
B代表单向连通图
C代表弱连通图
*/
#include <bits/stdc++.h>
#define MAX 300

int main(){
	int a[MAX][MAX];
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			for(int k = 0; k < n; k++)
				if((a[i][j] != 0) && (a[j][k] != 0))
					a[i][j] = 1;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((a[i][j] == 0) && (a[j][i])){
				printf("B\n");
				return 0;
			}
			if(a[i][j]+a[j][i]==1){
				printf("C\n");
				return 0;
			}
		}
	}
	printf("A\n");

	return 0;
}