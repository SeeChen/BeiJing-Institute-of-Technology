/*
题目背景 
C语言课程开设以来，许多同学被各种WA,RE,TLE,MLE伤得欲哭无泪。
而YW大神，由于程序写得好，代码改的快，亲和又善良，纯洁又无害（此处省略1000字）不少同学纷纷找大神求改程序。
然而，其中某渣渣同学发来的代码处于：无换行无缩进无对齐的”三无状态”，令沉溺于SM（哦不，ACM）这种高水平的大神才能享受的比赛的大神头昏眼花，倍感心酸。
大神每次帮渣渣改程序都要耗费大量地精力和愉悦度（这是大神的HP与MP）来规范代码。（此处有哭声）
于是，作为大神的好基友大师，你决定写一个程序来将渣渣发来的程序自动“规范化”，以愉悦善良又可爱又机智又神牛的大神，让TA能够有足够的心情和时间去ACM的课程中虐人。（什么？你问大神为什么不写一个这样的程序？ 答案是显然的，大神没有精力写这种简单的程序，当然要让大神的崇拜者大师来写。）
活泼的PS： 大家写代码要注意规范哦~~~不然大神哭给你看呜呜呜呜……
自己改错是一个好习惯~~可以从改错误收获很多~
大神还要去虐校赛地区赛各种赛呢~
那么~ 什么是「规范化」捏？
所有语句按层次缩进，每个缩进为4个空格（参见样例）；
花括号必须独占一行，同层次括号必须对齐；
每行只能存在一个带有分号的语句（for(;;)循环中的分号不算）；
for语句独占一行；
若不需进行「规范化」则原样输出（例#include<stdio.h>）。
鉴于渣渣同学的水平（= =），我们假定渣渣的代码中不存在注释，不存在for和if语句的嵌套，也不会存在一些奇葩语句。if语句不会有else，for循环的结构体保证有大括号{}包围。虽然渣渣的代码没有缩进，但时不时会有一些换行。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000
int main(){
	int i,j,k,aa=0;
	char c[N][N];
	char ch,prech;
	int hxkohc=0,vuhjuu=0,ksge=0,newLine=0,ffhc=0;
	for(i=0;;i++){
		scanf("%s",&c[i]);
		for(j=0;c[i][j]!='\0';j++){
			if(c[i][j]=='{'){
				hxkohc+=1;
			}else if(c[i][j]=='}'){
				hxkohc-=1;
				if(vuhjuu==1&&hxkohc==0){
					c[i+1][0]='@';
					goto uuiu;
				}
			}else if(c[i][j-3]=='m'&&c[i][j-2]=='a'&&c[i][j-1]=='i'&&c[i][j]=='n'){
				vuhjuu=1;
			}
		}
	}
	uuiu:
	i=0,j=-1;
	while(1){
		j+=1;
		prech=c[i][j-1];
		if(c[i][j]=='\0'){
			i+=1;
			j=0;
			if(ch!='\n'&&ch!='{'&&ch!='}'&&newLine!=0&&i!=1&&ch!=')')
				printf(" ");
		}
		ch=c[i][j];
		if(c[i][0]=='@'){
			exit(0);
		}
		if(c[i][j-2]=='f'&&c[i][j-1]=='o'&&c[i][j]=='r')
			ffhc=2;
		if(newLine==0&&ch!='}'){
			for(k=0;k<ksge;k++){
				printf(" ");
			}
			newLine=1;
		}
		if(ch!='\n'&&ch!='{'&&ch!='}')
			printf("%c",ch);
		switch(ch){
			case '\n':
				printf("");
				break;
			case ';':
				if(ffhc==0){
					printf("\n");
					newLine=0;
				}else{
					ffhc-=1;
				}
				break;
			case '>':
				printf("\n");
				break;
			case '{':
				if(prech!=';'&&prech!='{'){
					printf("\n");
					aa=0;
				}else
					aa+=1;
				for(k=0;k<ksge-(4*aa);k++)
					printf(" ");
				printf("%c\n",ch);
				newLine=0;
				ksge+=4;
				break;
			case '}':
				ksge-=4;
				for(k=0;k<ksge;k++){
					printf(" ");
				}
				printf("%c\n",ch);
				newLine=0;
				break;
			default:
				break;
		}
	}
}
