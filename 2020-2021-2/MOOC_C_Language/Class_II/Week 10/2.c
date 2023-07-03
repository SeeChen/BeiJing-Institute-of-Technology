/* 
题目内容：
请在上一题的基础上，采用递归的方法，计算含多个运算符的四则运算表达式字符串的值(无括号，但要考虑优先级)
输入格式:
多个运算符的四则运算表达式字符串
输出格式：
运算结果
输入样例：
3*2+3
输出样例：
9
*/
#include <stdio.h>
int calc(int*,char*,int);
int main(){
	int i,j,k,uuzi[100];
	char srui[100];
	for(i=0;;i++){
		scanf("%d",&uuzi[i]);
		scanf("%c",&srui[i]);
		if(srui[i]=='\n')
			break;
	}
	
	for(j=0;srui[j]!='\n';j++){
		if(srui[j]=='*'||srui[j]=='/'){
			if(srui[j]=='*'){
				uuzi[j]*=uuzi[j+1];
				for(k=j;srui[k]!='\n';k++){
					uuzi[k+1]=uuzi[k+2];
					srui[k]=srui[k+1];
				}
			}else if(srui[j]=='/'){
				uuzi[j]/=uuzi[j+1];
				for(k=j;srui[k]!='\n';k++){
					uuzi[k+1]=uuzi[k+2];
					srui[k]=srui[k+1];
				}
			}
			j--;i--;
		}
	}
	printf("%d",calc(uuzi,srui,i));
}
int calc(int uuzi[],char srui[],int j){
	--j;
	if(j==-1)
		return uuzi[j+1];
	else{
		switch(srui[j]){
			case '+':
				return calc(uuzi,srui,j)+uuzi[j+1];
				break;
			case '-':
				return calc(uuzi,srui,j)-uuzi[j+1];
				break;
		}
	}
}
