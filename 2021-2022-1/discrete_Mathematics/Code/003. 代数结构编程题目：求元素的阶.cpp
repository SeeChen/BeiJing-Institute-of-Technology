/*
要求源代码中给出求解过程和注释，不能直接输出结果。
设 Z18 为模 18 整数加群，求元素的阶。
*/

#include <bits/stdc++.h>

int main(){
	int z[18], n = 0, rank = 1, res;
	
	//初始化模18整数加法群z
	for(int i = 0; i < 18; ++i)
		z[i] = i;
	scanf("%d", &n);
	res = n;
	
	//循环运算直到结果为幺元0
	while(res != z[0]){
		res = (res + n) % 18;
		++rank;
	}
	printf("%d\n",rank);  
}