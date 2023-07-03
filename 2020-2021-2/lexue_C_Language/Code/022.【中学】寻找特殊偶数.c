/*
背景
有一种特殊偶数，它每一位上的数字都两两不相同。我们现在需要找出四位数中某一区间内的这类偶数。
输入
所要寻找的四位偶数的范围。每组输入有两个数字：第一个数字是最小范围；第二个数字是最大范围。如果输入遇到0，输入结束。
输出 
列出此范围内的所有特殊偶数，并且列出此范围内特殊偶数的个数。
*/
#include <stdio.h>
int main(){
	int a,b,i,counter=0;
	int th,hun,ten,single;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==0||b==0)
		printf("0\n");
	else{
		if(a<1000||b<1000)
			printf("error");
		else{
			for(i=a;i<=b;i++){
				if(i%2==0){
					th=i/1000;
					hun=(i%1000)/100;
					ten=(i%1000)%100/10;
					single=(i%1000)%100%10;
					if(th!=hun&&th!=ten&&th!=single&&hun!=ten&&hun!=single&&ten!=single){
						counter++;
            printf("%d\n",i);
          }
        }
      }
      printf("\n");
      printf("%d\n",counter);
    }
  }
  return 0;
}
