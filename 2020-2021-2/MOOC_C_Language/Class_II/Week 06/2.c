/*
题目内容：
    有如下学生成绩表，第一列前4行为学生姓名，第一列最后一行为平均分，表中给定数据为学生成绩（每一列为同一门课）
wanglei     78      90      87      92
lihong      88      91      89      78
zhangli     84      76      83      75
liuming     88      90      71      83
AVERAGE
编程输出：学生姓名，每个学生的平均分，及各门课程平均分
输入格式：
无
输出格式：
学生姓名，每个学生的平均分（按行输出）
各门课程平均分（按列输出）
（若平均分为整数，则输出整数，若平均分为小数，则保留两位）
输入样例：
无
输出样例：
wanglei,0.00[回车]
lihong,0.50[回车]
zhangli,0.50[回车]
liuming,80[回车]
AVERAGE:4.50,6.75,2.50,2[回车]
（仅作输出格式实例展示，不代表最终结果）
*/
#include <stdio.h>
typedef struct 
{
    char name[20];
    int s[4];
    int a1;
    float a2;
}stu;
 
stu data[4] = 
{
    {"wanglei",78,90,87,92},{"lihong",88,91,89,78},{"zhangli",84,76,83,75},{"liuming",88,90,71,83}
};
 
int main()
{
    int i, j;
    int a1[4] = {0};
    float a2[4];
 
    for(i = 0; i < 4; i ++)
    {
        for(j = 0; j < 4; j ++)
        {
            a1[j] += data[i].s[j];
            data[i].a1 += data[i].s[j];
        }
        if(data[i].a1%4==0)data[i].a1/=4;
        else
        {
            data[i].a2 = data[i].a1 / 4.0;
            data[i].a1 = -1;
        }
    }
    for(j = 0; j < 4; j ++)
    {
        if(a1[j]%4==0)a1[j]/=4;
        else
        {
            a2[j] = a1[j] / 4.0;
            a1[j] = -1;
        }
    }
    for(i = 0; i < 4; i ++)
    {
        printf("%s,", data[i].name);
        if(data[i].a1 == -1)
            printf("%.2f\n",data[i].a2);
        else
            printf("%d\n",data[i].a1);
    }
    printf("AVERAGE:");
    for(i = 0; i < 4; i ++)
    {
        if(a1[i] == -1)
            printf("%.2f",a2[i]);
        else
            printf("%d",a1[i]);
        if(i == 3) printf("\n");
        else printf(",");
    }
}
