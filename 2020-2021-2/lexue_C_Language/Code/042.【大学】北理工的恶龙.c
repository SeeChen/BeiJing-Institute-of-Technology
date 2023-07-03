/*
背景：
最近，北理工出现了一只恶龙，它长着很多 头，而且还会吐火，它将会把北理工烧成废墟， 于是，校长下令召集全校所有勇士杀死这只恶龙。要杀死这只龙，必须把它所有的头都砍掉，每个勇士只能砍一个龙头，龙的每个头大小都不一样，一个勇士只有在身高不小于龙头的直径的情况下才能砍下它。而且勇士们要求，砍下一个龙头必须得到和自己身高厘米数一样的学分。校长想花 最少的学分数 杀死恶龙，于是找到你寻求帮助。
输入：
第一行 龙头数 n , 勇士人数 m （ 1<=n, m<=100 ） 接下来 n 行，每行包含一个整数，表示龙头的直径 接下来 m 行，每行包含一个整数，表示勇士的身高 l
 输出：
 如果勇士们能完成任务，输出校长需要花的最小费用；否则输 出 “bit is doomed! ”
*/
#include <stdio.h>
int main(){
	int i,j,t;  
    int dragon[105],dragon_f[105];  
    int warrior[105],warrior_f[105];  
    int dragon_n,warrior_n;
  	scanf("%d %d",&dragon_n,&warrior_n);  
    for (i=0; i<dragon_n; i++){  
         scanf("%d",&dragon[i]);  
     }  
     for (i=0; i<warrior_n; i++){  
         scanf("%d",&warrior[i]);  
     }  
     for (i=0; i<105; i++){  
         dragon_f[i] = warrior_f[i] = 0;  
     }  
     for (i=0; i<dragon_n-1; i++){  
         for (j=0; j<dragon_n-i-1; j++){  
             if (dragon[j] > dragon[j+1]){  
                 t = dragon[j+1];  
                 dragon[j+1] = dragon[j];  
                 dragon[j] = t;  
             }  
         }  
     }  
     for (i=0; i<warrior_n-1; i++){  
         for (j=0; j<warrior_n-i-1; j++){  
             if (warrior[j] > warrior[j+1]){  
                 t = warrior[j+1];  
                 warrior[j+1] = warrior[j];  
                 warrior[j] = t;  
             }  
         }  
     }  
	for (i=0; i<dragon_n; i++){  
         for (j=0; j<warrior_n; j++){  
             if (dragon[i] <= warrior[j] && dragon_f[i] == 0 && warrior_f[j] == 0){  
                 dragon_f[i] = 1;  
                 warrior_f[j] = 1;  
             }  
         }  
     }  
     for (i=0; i<dragon_n; i++){  
         if (dragon_f[i] == 0){  
             printf("bit is doomed!\n");  
             return 0;  
         }  
     }  
     int sum = 0;  
     for (i=0; i<warrior_n; i++){  
         if (warrior_f[i] == 1){  
             sum = sum + warrior[i];  
         }  
     }  
     printf("%d\n",sum);  
     return 0;  
 }  
