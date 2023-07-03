/*
Description
十年前，北湖还只是一个深坑，未完成蓄水工作。为了确保蓄水工作的顺利进行，我们需要对北湖的蓄水量进行粗略估计。
为了简化运算，我们假设北湖的地面是一维的，每一块宽度都为1，高度是非负整数，那么可以用一个数组来表达一块地面。
例如数组 左中括號 0 逗號 1 逗號 0 逗號 2 逗號 1 逗號 0 逗號 1 逗號 3 逗號 2 逗號 1 逗號 2 逗號 1 右中括號 可以用来表示下图地面：
北湖深坑 样例解释
图中绿色代表地面部分，蓝色部分代表蓄水部分，蓄水量为 6 。
Input
样例输入有多组。
第一行输入整数 T 左小括號 斜體字 1 斜體字 小於等於 T 斜體字 小於等於 斜體字 100 右小括號 表示有 T 组用例；
接下来，对于每组用例，输入一个正整数 n 左小括號 斜體字 1 斜體字 小於等於 n 斜體字 小於等於 斜體字 100000 右小括號，表示地面总宽度为 n 。
接下来一行是 n 个数a 下標 i，用空格隔开，表示地面高度。左小括號 0 小於等於 a 下標 i 小於等於 1 e 9 右小括號
Output
对于每个用例输出一行一个数字，表示蓄水总量。
*/
#include <stdio.h>
#define max 100005
int main(){
	int T,i;
	for(scanf("%d",&T);T;T--){
		long long int n,height[max]={0},water=0,heightLeft[max]={0},heightRight[max]={0};
		scanf("%lld",&n);
		for(i=0;i<n;i++)\
			scanf("%lld",&height[i]);
		heightLeft[0]=height[0];
		heightRight[n-1]=height[n-1];
		for(i=1;i<n-1;i++){
			if(height[i]<heightLeft[i-1])
				heightLeft[i]=heightLeft[i-1];
			else
				heightLeft[i]=height[i];
		}
		for(i=n-2;i>0;i--){
			if(height[i]<heightRight[i+1])
				heightRight[i]=heightRight[i+1];
			else
				heightRight[i]=height[i];
		}
		for(i=1;i<n-1;i++)
			if(heightLeft[i]>heightRight[i])
				water+=heightRight[i]-height[i];
			else
				water+=heightLeft[i]-height[i];
		printf("%lld\n",water);
	}
}
