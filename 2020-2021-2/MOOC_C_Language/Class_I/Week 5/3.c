/*
题目内容：
求满足下列不等式的最小 m。
1 + 2 + 3 + 4 + ...... + m ≥ n
例如：n=100，当 m =14 时，满足：1+2+3+4+...+13=91<100，而 1+2+3+4+......+14=105>100。
输入格式: 
n
输出格式：
m
输入样例：
100
输出样例：
14
*/
#include <stdio.h>
int main(){
    int n,m,total=0;
    scanf("%d",&n);
    for(m=1;m<=n;m++){
        total+=m;
        if(total>=n) break;
    }
    printf("%d",m);
}
