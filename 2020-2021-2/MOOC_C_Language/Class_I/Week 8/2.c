/*
题目内容：
二维数组中的鞍点，即该位置上的元素是所在行上的最大值，是所在列上的最小值。
二维数组也可能没有鞍点。
输入一个二维数组的行数n，列数m，二维数组的诸元素值；输出数组的鞍点，以及鞍点所在的行列号。
输入格式：
第一行为矩阵的行数和列数，从第二行开始，为矩阵本身（假设输入的矩阵只有0和1个鞍点）
输出格式：
数组的鞍点，以及鞍点所在的行列号 (下标从0开始)
输入样例1：
3 4
1 3 5 3
2 3 4 1
3 2 6 7[回车]
输出样例1：
Point:a[1][2]==4[回车]
输入样例2：
3 4
1 2 3 4
8 4 3 6
9 4 5 1[回车] 
输出样例2：
No Point[回车]
*/
#include <stdio.h>
int main(){
	int m,n,i,j,x,y,z,min;
	scanf("%d %d",&m,&n);
	int a[50][50];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max=0;
	i=0;
	for(j=0;j<=n;j++){
		if(a[i][j]>max){
			max=a[i][j];
			y=j;
		}
		if(i==m){
			break;
		}
		if(j==n){
			min=100;
			for(z=0;z<m;z++){
				if(a[z][y]<min){
					min=a[z][y];
					x=z;
				}
			}
			if(max==min){
				printf("Point:a[%d][%d]==%d",x,y,a[x][y]);
				goto end;
			}
			i++;j=0;
			max=a[i][0];
		}
	}
	printf("No Point");
	end:
	printf("\n");
}
