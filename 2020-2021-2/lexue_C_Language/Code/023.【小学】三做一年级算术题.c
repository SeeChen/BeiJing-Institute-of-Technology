/* 
两个一年级小朋友在一起玩游戏，小明给出一堆一位的正整数和运算要求（+、-、*、/、%），小丽要找出这些整数中的最大值和最小值，然后按照小明的要求算出最大数与最小数进行算术运算的结果。
输入：
    用逗号分隔的一位正整数序列，及其运算符和等号
输出：
    最大数 op 最小数=结果
*/
#include <stdio.h>
#define N 100
int main(){
	int i = 0;		
	int tmp;		
	char op;		
	char str[N]; 
	int max = 0;		
	int min = 100;
	int count = 0;		
	gets(str);   
	i=0;
	while(1){
		if (str[i] >= '0' && str[i] <= '9'){
			count++;						
		}else if (str[i] == ','){
			if (count == 1){
				tmp = str[i-1] - '0';
			}else if (count == 2){
				tmp = (str[i-2] - '0') * 10 + str[i-1] - '0';
			}
			if (max < tmp){
				max = tmp;
			}
			if (min > tmp){
				min = tmp;
			}
			count = 0;				
		}else if(str[i]=='*' || str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='%'){   
            op = str[i];         
			break;	     
        }else if (str[i] == '='){
			break;		 
		}
		i++;
    } 	
	switch(op){
	case '+':
		printf("%d+%d=%d\n", max, min, max + min);
		break;
	case '-':
		printf("%d-%d=%d\n", max, min, max - min);
		break;
	case '*':
		printf("%d*%d=%d\n", max, min, max * min);
		break;
	case '/':					
		if(min == 0){
			printf("Error!\n");
		}else{
			printf("%d/%d=%d\n", max, min, max / min);
		}
		break;
	case '%':
		if(min == 0){
			printf("Error!\n");
		}else{
			printf("%d%%%d=%d\n", max, min, max % min);
		}
		break;
	}
	return 0;
}
