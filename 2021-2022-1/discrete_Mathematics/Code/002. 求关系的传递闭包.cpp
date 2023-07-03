/*
输入
一次输入一个关系矩阵，每一行两个相邻元素之间用一个空格隔开，输入元素的行与列分别对应关系矩阵的行与列。关系的基数小于12。
输出
输出该关系的传递闭包所对应的关系矩阵。
*/
#include <bits/stdc++.h>

#define MAX 101

int main(){
	int data[MAX];
	int trans[MAX][MAX];
	int n = 0, i = 0, k = 0, j = 0;
	
	while (scanf("%d", &data[n]) != EOF)
		n++;
	int *p = data;
	for (i = 0; i < sqrt(n); i++){
		for (j = 0; j < sqrt(n); j++){
			trans[i][j] = p[j];
		}
		p += (int)sqrt(n);
	}
	for (k = 0; k < sqrt(n); k++)
		for (i = 0; i < sqrt(n); i++)
			for (j = 0; j < sqrt(n); j++)
				trans[i][j] = trans[i][j] || (trans[i][k] && trans[k][j]);
	
	for (i = 0; i < sqrt(n); i++){
		for (j = 0; j < sqrt(n); j++){
			if (j < (int)sqrt(n) - 1)
				printf("%d ", trans[i][j]);
			else
				printf("%d", trans[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}