/*
 从键盘输入的一个大于 1 的整数，通过算法将该整数分解为若干因子的乘积。
输入： 
    一个正整数。
输出：
    分解后的各个因子。
*/
#include <stdio.h>
int main(){
	int x,i=2;
	scanf("%d",&x);
	while(x!=1){
		if(x%i==0){
			printf("%d\n",i);
			x/=i;
		}else
			i++;
	}
}
