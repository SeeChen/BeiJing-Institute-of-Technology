/* 
背景：两个人每人发3张牌（各从一副牌中），每张牌包括花色（红桃(Heart)>黑桃(Spade)>方块(Diamond)>梅花(Club））和大小（从小到大依次是：2-10、J、Q、K、A），谁手上有最大的一张或多张（如果有相同的牌）牌谁获胜。
输入：A的3张牌（未排序）和B的3张牌（未排序）。（参见用例）
输出：A的3张牌的排序后的输出和B的3张牌的排序后的输出，以及A和B谁获胜。
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10
struct poker{
	char hxse[N];
	char hcma[N];
}A[3],B[3],AA[3],BB[3];
void errMsg(){
	printf("Input Error!\n");
	exit(0);
}
int main(){
	int i,j,x=0,y=0,ax,ay,bx,by,k;
	char *suit[]={"H","S","D","C"};
	char *num[]={"A","K","Q","J","10","9","8","7","6","5","4","3","2"};
	scanf("%c%s %c%s %c%s\n",&A[0].hxse,&A[0].hcma,&A[1].hxse,&A[1].hcma,&A[2].hxse,&A[2].hcma);
	scanf("%c%s %c%s %c%s",&B[0].hxse,&B[0].hcma,&B[1].hxse,&B[1].hcma,&B[2].hxse,&B[2].hcma);
	for(i=0;i<3;i++){//判断花色是否错误
		for(j=0;j<=4;j++){
			if(strcmp(A[i].hxse,suit[j])==0){
				break;
			}else if(j==3){
				errMsg();
			}
		}
		for(j=0;j<=4;j++){
			if(strcmp(B[i].hxse,suit[j])==0){
				break;
			}else if(j==3){
				errMsg();
			}
		}
	}
	for(i=0;i<3;i++){//判断号码是否错误
		for(j=0;j<=13;j++){
			if(strcmp(A[i].hcma,num[j])==0){
				break;
			}else if(j==12){
				errMsg();
			}
		}
		for(j=0;j<=13;j++){
			if(strcmp(B[i].hcma,num[j])==0){
				break;
			}else if(j==12){
				errMsg();
			}
		}
	}
	for(i=0;i<3;i++){//判断是否拥有相等牌面
		for(j=i+1;j<3;j++){
			if(strcmp(A[i].hxse,A[j].hxse)==0)
				if(strcmp(A[i].hcma,A[j].hcma)==0)
					errMsg();
		}
		for(j=i+1;j<3;j++){
			if(strcmp(B[i].hxse,B[j].hxse)==0)
				if(strcmp(B[i].hcma,B[j].hcma)==0)
					errMsg();
		}
	}
	for(i=0;i<13;i++){//按号码排序
		for(j=0;j<3;j++){
			if(strcmp(A[j].hcma,num[i])==0){
				AA[x]=A[j];
				x++;
			}
		}
		for(j=0;j<3;j++){
			if(strcmp(B[j].hcma,num[i])==0){
				BB[y]=B[j];
				y++;
			}
		}
	}
	x=0;y=0;
	for(i=0;i<4;i++){//按花色排序
		for(j=0;j<3;j++){
			if(strcmp(AA[j].hxse,suit[i])==0){
				A[x]=AA[j];
				x++;
			}
		}
		for(j=0;j<3;j++){
			if(strcmp(BB[j].hxse,suit[i])==0){
				B[y]=BB[j];
				y++;
			}
		}
	}
	k=-1;
	compare:
	k+=1;
	for(i=0;i<4;i++){//比较大小
		if(strcmp(A[k].hxse,suit[i])==0)
			ax=i;
		if(strcmp(B[k].hxse,suit[i])==0)
			bx=i;
	}
	if(ax<bx)
		printf("Winner is A!\n");
	else if(ax>bx)
		printf("Winner is B!\n");
	else{
		for(i=0;i<13;i++){
		if(strcmp(A[k].hcma,num[i])==0)
			ay=i;
		if(strcmp(B[k].hcma,num[i])==0)
			by=i;
		}
		if(ay<by)
			printf("Winner is A!\n");
		else if(ay>by)
			printf("Winner is B!\n");
		else{
			if(k!=2)
				goto compare;
			else
				printf("Winner is X!\n");
		}
	}
	printf("A: %s%s %s%s %s%s\n",A[0].hxse,A[0].hcma,A[1].hxse,A[1].hcma,A[2].hxse,A[2].hcma);
	printf("B: %s%s %s%s %s%s\n",B[0].hxse,B[0].hcma,B[1].hxse,B[1].hcma,B[2].hxse,B[2].hcma);
}
