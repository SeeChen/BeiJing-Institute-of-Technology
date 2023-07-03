/* 
大家参加了期末考试，成绩出来后老师要对 n 个学生进行成绩汇总和排序。要求程序按成绩降序进行排序。在排序过程中对于成绩相同的学生，要按照输入数据的顺序进行排列。例如：有5名学生的成绩：
zhang1,90
zhang2,91
zhang3,99
zhang4,91
zhang5,98
则排序结果应该为：
zhang3,99
zhang5,98
zhang2,91
zhang4,91
zhang1,90
请注意例题中“zhang2”和“zhang4”的排列顺序。
输入：
    第一行为将要输入的学生数量n
    从第二行起后面连续 n 行数据，每行为一名学生的姓名（长度不超过20个字符，不包括空格），考试成绩（int）
输出：
    排序后的结果。每行为一名学生的姓名和成绩。
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int num;
	int i,j,t=0;
	char inf[10000];
    int m[100];
    int temp;
    int flag;
	struct o{
		char name[1000];
		int score;
		int no;
	}student[100];
	scanf("%d",&num);  
	for(i=0;i<num;i++){
		student[i].no=i;
	    t=0;
	    flag=0;
		scanf("%s",inf);
		for(j=0;inf[j]!=',';j++){
			student[i].name[j]=inf[j];
	    }
	    student[i].name[j]='\0';
	    for(j++;inf[j]!='\0';j++){
	    	m[t]=inf[j]-'0';
	    	t++;
		}
		student[i].score=0;
		for(j=0;j<t;j++)
		student[i].score=m[j]*pow(10,t-j-1)+student[i].score;
	}
	for(i=0;i<num;i++)
	for(j=i+1;j<num;j++)
	if(student[i].score<student[j].score&&student[i].no<student[j].no){
		temp=student[i].no;
		student[i].no=student[j].no;
		student[j].no=temp;	
	}
	for(i=0;i<num;i++)
		for(j=i+1;j<num;j++)
			if(student[i].score==student[j].score){
				for(t=0;student[j].name[t]!='\0'&&student[i].name[t]!='0';t++)
					if(student[j].name[t]>student[i].name[t]&&student[j].no<student[i].no){
						temp=student[i].no;
						student[i].no=student[j].no;
						student[j].no=temp;	
					}
			}
	for(i=0;i<num;i++)
	for(j=0;j<num;j++)
	if(student[j].no==i){
		for(t=0;student[j].name[t]!='\0';t++)
		printf("%c",student[j].name[t]);
		printf(",");
		printf("%d\n",student[j].score);
	}
}
