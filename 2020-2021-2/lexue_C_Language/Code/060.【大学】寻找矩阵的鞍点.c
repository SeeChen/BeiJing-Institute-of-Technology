/*
二维数组中的鞍点，即该位置上的元素是所在行上的最大值，是所在列上的最小值。
二维数组也可能没有鞍点。
输入一个二维数组的行数n，列数m，二维数组的诸元素值；输出数组的鞍点，以及鞍点所在的行列号。
输入：第一行为矩阵的行数和列数，从第二行开始，为矩阵本身（假设输入的矩阵只有0和1个鞍点）
    3 4
    1 3 5 3
    2 3 4 1
    3 2 6 7 
输出：
     Point: a[1][2] == 4   (下标从0开始)
*/
#include <stdio.h>
int main(){
	int x=0,y=0,m,n,i,j,a[50][50]={0},k=0;
	int max=0,min=100;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j];
				y=j;
			}
		}
		for(k=0;k<m;k++){
			if(a[k][y]<min){
				min=a[k][y];
				x=k;
			}
		}
		if(max==min){
			goto SC;
		}
		max=0;min=100;
	}
	
	printf("No Point");
	goto SC_L;
	SC:
	printf("Point:a[%d][%d]==%d",x,y,a[x][y]);
	SC_L:
	printf("\n");
}
