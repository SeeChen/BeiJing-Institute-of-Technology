/*
题目内容：
    用指针方法，将一维数组int a[10] 中元素按从小到大顺序输出。
输入格式：
    10个整数，空格隔开
输出格式：
    排序后的10个数，逗号隔开
输入样例：
12 34 56 43 7 89 81 11 33 90[回车]
输出样例：
7,11,12,33,34,43,56,81,89,90[回车]
*/
#include <stdio.h>
#include <string.h>
void swap(int *pa,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(pa+i)>*(pa+j))
              {
                t=*(pa+i);
                *(pa+i)=*(pa+j);
                *(pa+j)=t;
              }
        }
    }
}
int main()
{
    int i,n=10,a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    swap(a,n);
    for(i=0;i<9;i++)
    {
        printf("%d,",a[i]);
    }
	printf("%d\n",a[i]);
}
