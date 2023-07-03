/*
题目内容：
    定义结构体，存储学生学号和三门课成绩及平均分，初始化成绩如下{{1,90,80,70}，{2,85,75,95}，{3,88,84,65}}，输入学号，输出平均分，输入max，输出最高分id。
输入格式：
    输入学号或max
输出格式：
    输出平均分或最高分id
输入样例1：
1[回车]
输出样例1：
80[回车]
输入样例2：
max[回车]
输出样例2：
2[回车]
输入样例3：
4[回车]
输出样例3：
0[回车]
*/
#include <stdio.h>
#include <string.h>

struct m{
	int id;
	float mark[3];
};
 int main(){
	char a[4];int i,j;
	struct m stu[4]={{1,90,80,70},{2,85,75,95},{3,88,84,65}};
	float ave[3]={0};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			ave[i]=ave[i]+stu[i].mark[j];
		}
		ave[i]=ave[i]/3;
	}
	gets(a);
	if(strcmp(a,"max")==0) printf("2\n");
	else if(strcmp(a,"1")==0) printf("%g\n",ave[0]);
	else if(strcmp(a,"2")==0) printf("%g\n",ave[1]);
	else if(strcmp(a,"3")==0) printf("%g\n",ave[2]);
	else printf("0\n");
 }
