/*
输入：
    两个整数，每个整数之间使用空格分隔。例如输入格式为：123  444
输出：
    分别输出按照整型数据进行 +、-、*、/、* 之后的运行结果。
*/
#include <stdio.h>        
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d+%d=%d\n",a,b,a+b);
  printf("%d-%d=%d\n",a,b,a-b);
  printf("%d*%d=%d\n",a,b,a*b);
  printf("%d/%d=%d\n",a,b,a/b);
  printf("%d%%%d=%d\n",a,b,a%b);
}
