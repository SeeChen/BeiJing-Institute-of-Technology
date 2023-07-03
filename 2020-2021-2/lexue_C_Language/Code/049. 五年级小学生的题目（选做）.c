/*
那两个小朋友在不断进步，他们已经学会了负数和多位数，于是他们又开始进行游戏了。小明给出一堆整数和运算要求（+、-、*、/、%），小丽要找出这些整数中的最大值和最小值，然后按照小明的要求算出最大数与最小数进行算术运算的结果。
输入：
    用逗号分隔的整数序列，及其运算符和等号
输出：
    最大数 op 最小数=结果
说明：本题目应该可以不使用数组就可以完成，关键是如何处理负数和减法。
*/
#include <stdio.h>
#include <string.h> 
int intpow(int a,int b){
	int result=1;
	for(int i=0;i<b;i++)
		result=result*a;  
	return result; 
}  
struct date{
	int max;  
	int min;  
	char op;  
	int  r; };  
	struct date function(char p[],int n) { 
		struct date result;
		n=n-4;  
		int max=-10000;  
		int min=10000;  
		int count=0;
		int x[10]={0};
		int temp=0;
		int sign=1;
		for(int i=0;i<=n;i++){
			if (p[i]==','){
				for(int k=0;k<count;k++)     
					temp=temp+x[k]*intpow(10,count-1-k);    
				temp=temp*sign;    if(temp>max) max=temp;    
				if(temp<min) min=temp;     
				count=0;temp=0;sign=1;    
				continue;   
			}      
			if(p[i]=='-'){    
				sign=-1;    
				continue;   
			}else{
				x[count]=p[i]-'0';   
				count++;   
			}  
		}   
		char opp;  
		opp=p[n+1];      
		if(opp=='+'){
			result.r=max+min;result.op='+';
		}else if(opp=='-'){
			result.r=max-min;result.op='-';
		}else if(opp=='*'){
			result.r=max*min;result.op='*';
		}else if(opp=='/'){
			if(min==0)
				result.r=0;
			else{
				result.r=max/min;
			}
			result.op='/';  
		}else if(opp=='%'){
			result.r=max%min;result.op='%';
		}
		result.max=max;  
		result.min=min;   
		return result; 
}  
	
int main(){
	char w[100];  
	gets(w);  
	int l=strlen(w);  
	struct date cc=function(w,l);   
	if(cc.op=='/'&&cc.min==0)
		printf("Error!");  
	else{
		if(cc.max<0)
			printf("(%d)",cc.max);   
		else    
			printf("%d",cc.max);   
		printf(" %c ",cc.op);   
		if(cc.min<0)    
			printf("(%d)",cc.min);   
		else    
			printf("%d",cc.min);   
		printf(" = ");   
		printf("%d",cc.r); 
		printf("\n");  
	} 
}
