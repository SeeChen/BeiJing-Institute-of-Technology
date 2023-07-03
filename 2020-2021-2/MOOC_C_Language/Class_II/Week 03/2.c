/*
题目内容：
    编程调用递归函数。一个人赶着鸭子去每个村庄卖，每经过一个村子卖去所赶鸭子的一半又一只。这样他经过了7个村子后还剩2只鸭子，问他出发时共赶多少只鸭子？经过每个村子时依次卖出多少只鸭子？
输入格式：
无
输出格式：
出发时总鸭子数
每个村子卖出鸭子数
输入样例：
无
输出样例：(不是结果，仅表示格式)
sum=25[回车]
sell=8,sell=4,[回车]
*/
#include <stdio.h>
int n,x,a=0;
int duck();

int main(){
	n=duck(2);
	printf("sum=%d\n",n);
	for(int i=1;i<=7;i++){
		printf("sell=%d,",((n/2)+1));
		n=(n/2)-1;
	}
	printf("\n");

}

int duck(int x){
	if(a==7){
		return x;
	}else{
		a+=1;
		x=2*(duck(x)+1);
	}
}
