/*
对于输入的 n 个数据 num 进行排序，要求将输入的数据按 num 升序建立带有表头结点的链表，且链表中不能有重复的数据。

　　现在已经给出结点定义和程序框架，包括 main 函数和链表输出函数 outlist，请编写函数 sortlist 完成链表排序功能。

函数原型 sortlist( PNODE h, int num ) 的参数含义如下： 
       h ：单链表的头指针
      num ：新输入的需要插入链表中的数据
*/
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
void outlist(PNODE);
void sortlist(PNODE,int);
int main(){
	int num=1;
	PNODE head;
	head=(PNODE)malloc(sizeof(NODE));
	head->next=NULL;
	head->data=-1;
	while(num!=0){
		scanf("%d",&num);
		if(num!=0)
			sortlist(head,num);
	}
	outlist(head);
	return 0;
}
void outlist(PNODE head){
	PNODE p;
	p=head->next;
	while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}
void sortlist(PNODE h,int num){
	PNODE p,ptemp;
	p=(PNODE)malloc(sizeof(NODE));
	p->data=num;
	ptemp=h;
	while((ptemp->next)!=NULL){
		if(num<=ptemp->data){
			break;
		}
		ptemp=ptemp->next;
	}
	if(num==ptemp->data){
		free(p);
	}else if(num>ptemp->data){
		p->next=ptemp->next;
		ptemp->next=p;
	}else if(num<ptemp->data){
		int temp;
		temp=ptemp->data;
		ptemp->data=num;
		p->data=temp;
		p->next=ptemp->next;
		ptemp->next=p;
	}
}
