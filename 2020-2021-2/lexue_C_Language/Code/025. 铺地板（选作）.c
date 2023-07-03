/*
背景： 
    你是一名室内装潢工程队的配料员。你的伙伴们喜欢采用“之”字型的方式铺大理石地砖，图案如下：
1	2	6	7	15
3	5	8	14	16
4	9	13	17	22
10	12	18	21	23
11	19	20	24	25
学了 C 语言以后，你决定编写一个程序，帮助你的同伴生成这样的图形。
输入：
    方阵N的大小。
输出
    方阵。
*/
#include "stdio.h"
 #define MAX 100
 int main(int argc, char **argv){
	int n , arr[MAX][MAX];
	scanf("%d", &n);
	getchar();//此程序只考虑n为奇数的情况。n为偶数时类似，只是状态state得调整一下
	if(n%2==0){
		printf("不支持n为偶数的情况。\n");
		return -1;
	}
	int num = 1;		//自增的数字
	int state = 0;		//状态，对应数字递增的方向
 	int i = 1, j = 1;
	//上三角部分
	while (1){
		arr[i][j] = num++;
		if (i == 1 || j == 1)           //碰到边缘，改变状态
			state = (state + 1) % 4;    //变成下一下一种状态，即下一种方向
		if (i == 1 && j == n)
			break;
		switch (state){
			case 0:       //右上
				i--;
				j++;
				break;
			case 1:       //向右
				j++;
				break;
			case 2:       //左下
				i++;
				j--;
				break;
			case 3:       //向下
				i++;
				break;
		}
	}
	state = 0;
	i = 2;	j = n;
    //下三角部分
	while (1){
		arr[i][j] = num++;
		if (i == n || j == n)			//碰到边缘，改变状态
			state = (state + 1) % 4;    //变成下一下一种状态，即下一种方向
		if (i == n && j == n)
			break;
		switch (state){
			case 3:       //右上
				i--;
				j++;
			break;
			case 2:       //向右
				j++;
				break;
			case 1:       //左下
				i++;
				j--;
				break;
			case 0:       //向下
				i++;
				break;
		}	
	}
 	//输出
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			if (j != n)
				printf("%2d ", arr[i][j]);
			else
				printf("%2d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
