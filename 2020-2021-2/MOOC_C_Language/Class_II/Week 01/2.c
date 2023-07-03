/*
题目内容：
  编写程序，在主函数中定义一个有10个元素的整型一维数组，用户输入9个数据，调用函数，对数组元素进行从小到大排序后，在函数中输入一个数，插入到数组中正确的位置，并输出。
输入格式:
  9个整数和1个整数
输出格式：
  10个整数
输入样例：
2,3,1,5,6,76,89,31,90[回车]
7[回车]
输出样例：
1,2,3,5,6,7,31,76,89,90[回车]
*/
#include<stdio.h>
 void sortArr(int *arr, int n, int x)
 {   
  arr[n-1] = x;
      int i;
     for(i=1; i<n; ++i){
          int j=i-1,key=arr[i];
         while(j>=0 && key<arr[j]){
             arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
     }
 }
 int main()
 {
     int arr[10] = {0},i,x;
     for(i=0; i<8; ++i)
         scanf("%d,",&arr[i]);
     scanf("%d%d",&arr[i],&x);
     
     sortArr(arr,10,x);
     for(i=0; i<9; ++i)
         printf("%d,",arr[i]);
     printf("%d\n",arr[i]);
 }
