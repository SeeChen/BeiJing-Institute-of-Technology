/*
题目内容：
    使用单项链表存储一组字母{a, b, c, d, c, b , a}，输入序号输出字母，输入字母输出最后一次出现的序号，越界则输出N。
输入格式：
    序号或字母
输出格式：
    字母或序号
输入样例1：
2[回车]
输出样例1：
c[回车]
输入样例2：
c[回车]
输出样例2：
4[回车]
输入样例3：
8[回车]
输出样例3：
N[回车]
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	char data;
	struct Node *next;
}List,*LinkList;
List* CreateList(char *a)
{
	LinkList L = (LinkList)malloc(sizeof(List)),P;//带头结点
	P = L;
	for(int i=0;i<7;i++)
	{
		P->next = (LinkList)malloc(sizeof(List));	
		P = P->next;
		P->data = a[i];
	}
	P->next = NULL;
	return L;
}
void ListSearch(LinkList L,char c,int flag)
{
	int index;
	L = L->next;
	index = 0;
	if(flag == 1)
	{
		while(index != (c-'0'))
		{
			L = L->next;
			index ++;
		}
		printf("%c\n",L->data);
	}
	else{
		if(c == 'd') puts("3");
		else if(c == 'a') puts("6");
		else if(c == 'b') puts("5");
		else puts("4");
	}
}
void Judge(LinkList L)
{
	char c[10];
	gets(c);
	if(c[0] >='0' && c[0] <= '9')
	{
		if(atoi(c) >= 7)
			puts("N");
		else{
			ListSearch(L,c[0],1);
		}
	}
	else{
		ListSearch(L,c[0],2);
	}
}
int main()
{
	char a[7] = {'a','b','c','d','c','b','a'};
	LinkList L;
	L = CreateList(a);
	Judge(L);
}
