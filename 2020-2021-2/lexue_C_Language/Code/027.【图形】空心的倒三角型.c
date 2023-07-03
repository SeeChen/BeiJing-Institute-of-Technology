/*
请根据要求打印可空心倒三角形。 
输入：
    输入三角形的高度（h >= 0）。
输出：
    打印相应的空心倒三角形.
*/
#include <stdio.h>
int main(){
	int n, i, j, k, l;
	scanf("%d", &n);
	for (i = 1; i < 2 * n; i++)
		printf("*");
	printf("\n");
	for (j = 2; j < n; j++){
		for (k = 1; k <= 2 * n - j; k++){
			if (k == j || k == 2 * n - j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (l = 1; l < n; l++){
		printf(" ");
	}
	printf("*");
}
