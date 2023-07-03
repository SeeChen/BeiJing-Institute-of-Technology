/*
小明在中学学习了什么是素数。素数是指一个只能被1和它本身整除的数，在数论中占有重要的研究地位，在当代密码学中也被广泛应用。
输入：
    取值范围
输出：
    该范围内的最大素数
*/
#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d",&a);
	if(a==2){
		printf("The max prime number is %d.\n",a);
	}else{
		b=a;c=b-1;
		while(b>1&&c>1){
			d=b%c;
			if(d==0){
				b=b-1;c=b-1;
			}else{
				c=c-1;
			}
		} 
		printf("The max prime number is %d.\n",b);	 
	}
}
