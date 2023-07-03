/* 
题目内容：
    输出所有不超过ｎ(取n<256)的、其平方具有对称性质的正整数（也称为回文数）。
如：  1*1=1； 2*2=4；3*3=9；11*11=121；1,2,3,11是回文数。
输入格式：
    输入n（n<256）
输出格式：
    输出所有不超过n的回文数
输入样例：
3
输出样例：
1[回车]
2[回车]
*/
#include <stdio.h>
int main(){
	int n,a[5],j;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		int sqrt=i*i;
		int k=0;
		do{
            a[k++] = sqrt % 10;
            sqrt /= 10;
        }while(sqrt != 0);
		 k--;
        for(j = 0 ; j < k ; j++, k--){
                if( a[j] != a[k] ){
					break;
				}
		}
        if(j == k)
        printf("%d\n",i);
	}
}
