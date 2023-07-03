/*
   传统的算术表达式是由操作数（又叫运算对象或运算量）和运算符以及改变运算次序的圆括号连接而成的式子。  其运算规则如下：
    (1) 先计算括号内，后计算括号外；  
    (2) 在无括号或同层括号内，先进行乘除运算，后进行加减运算，即乘除运算的优先级高于加减运算的优先级；  
    (3) 同一优先级运算，从左向右依次进行。 
    在这种表达式的计算过程中，既要考虑括号的作用，又要考虑运算符的优先级，还要考虑运算符出现的先后次序。
    波兰科学家卢卡谢维奇(Lukasiewicz)提出了算术表达式的另一种表示，即后缀表示，又称逆波兰式，其定义是把运算符放在两个运算对象的后面。在后缀表达式中，不存在括号，也不存在优先级的差别，计算过程完全按照运算符出现的先后次序进行，整个计算过程仅需一遍扫描便可完成。
例如：
            3/5+6的逆波兰表达式为3 5 / 6 +
            2*(3+4)的逆波兰表达式为2 3 4 + *
输入：
            一个只包含加、减、乘、除和数字的逆波兰表达式
输出：
            该表达式的值
说明：
    题目中涉及的数据全部为整型。
*/
#include<stdio.h>
#include<string.h>
char input[1000];
struct stack{
	int num[1000];
	int point;
}stack;
int calc(char ch){
	if(ch>='0'&&ch<='9')return 1;
	else if(ch=='+')return 2;
	else if(ch=='-')return 3;
	else if(ch=='*')return 4;
	else if(ch=='/')return 5;
	else return 0;
}
int main(){
	stack.point=0;
	gets(input);
	int len=strlen(input);
	for(int i=0;i<len;i++){
		if(calc(input[i])==1){
			int digit=0,ans=0,j;
			for(j=i;calc(input[j])==1;j++){
				ans=ans*10+input[j]-'0';
			}
			i=j;
			stack.num[stack.point]=ans;
			stack.point++;
			continue;
		}else if(calc(input[i])==2){
			stack.num[stack.point-2]=stack.num[stack.point-2]+stack.num[stack.point-1];
			stack.point--;
		}else if(calc(input[i])==3){
			if(calc(input[i+1])==1){
				i++;
				int digit=0,ans=0,j;
				for(j=i;calc(input[j])==1;j++){
					ans=ans*10+input[j]-'0';
				}
				i=j;
				stack.num[stack.point]=-ans;
				stack.point++;
				continue;
			}
			stack.num[stack.point-2]=stack.num[stack.point-2]-stack.num[stack.point-1];
			stack.point--;
		}else if(calc(input[i])==4){
			stack.num[stack.point-2]=stack.num[stack.point-2]*stack.num[stack.point-1];
			stack.point--;
		}else if(calc(input[i])==5){
			stack.num[stack.point-2]=stack.num[stack.point-2]/stack.num[stack.point-1];
			stack.point--;
		}
	}
	printf("%d\n",stack.num[0]);
	return 0;
}
