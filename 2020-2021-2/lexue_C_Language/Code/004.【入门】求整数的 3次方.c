/* 
输入一个整数 x，输出 x 的3次方。想一想，在C语言中如何用公式来表达 x 的 3次方？
输入：一个整数。
输出：该整数的 3 次方值。
*/
#include <stdio.h>    
int main(){
  int a;
  scanf("%d",&a);
  a=a*a*a;
  printf("%d\n",a);
  return 0;
}
