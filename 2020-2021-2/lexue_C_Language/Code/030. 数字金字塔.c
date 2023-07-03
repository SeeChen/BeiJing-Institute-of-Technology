/*
编程，输入 n ，输出如下例（ n=5 ）所示的 的数字金字塔。
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
 1 2 3 4 5 4 3 2 1
*/
#include "stdio.h"
int main() {
	int n,i,j;
	scanf("%d",&n);
		for(i=1; i<=n; i++) {
			for(j=1; j<=n-i; j++)
				printf(" ");
			for(j=1; j<=i; j++)
				printf("%d",j);
			for(j=i-1; j>=1; j--)
				printf("%d",j);
			printf("\n");
		}
}
