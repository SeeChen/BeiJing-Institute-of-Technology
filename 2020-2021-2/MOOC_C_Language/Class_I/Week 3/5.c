/*
题目内容：
输入三角型的三条边，判断三角形的形状。假设输入的三边边长均>0。
输入格式:
三角型的3条边的长度（int型）。
输出格式：
等边三角形：equilateral triangle
等腰三角形：isoceles triangle
不构成三角形：non-triangle
一般三角形：triangle
输入样例：
2 2 2 
输出样例：
equilateral triangle.
*/
#include <stdio.h>        
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a+b<c||a+c<b||b+c<a){
    printf("non-triangle.\n");
  }else if(a==b&&b==c){
    printf("equilateral triangle.\n");
  }else if(a==b||b==c||a==c){
    printf("isoceles triangle.\n");
  }else{
    printf("triangle.\n");
  }
}
