/*
Description 
众所周知，联盟有很多水王，他们的发贴数是如此之多，以至于必须要用高精度数才能保存。
为了迎接国庆，联盟决定举行一次水王争霸赛，比赛的规则是将这些水王截止到2030年9月30日23时59分59秒这一刻所发的总贴数从大到小进行排序。每个水王当然都想取得尽量靠前的名次，所以他们竭尽全力，不择手段地进行灌水。
终于，激动人心的一刻到来了，2030年10月1日0时0分0秒，你作为裁判得到了每个水王的发贴数，现在，你的任务是公正地把这些水王按照发贴数从大到小进行排序。
Input
输入的第一行是一个1到1000的整数N，表示总共有N位水王参加了争霸赛。
以下依次给出每位水王的描述，一位水王的描述占据两行，第一行为一个仅由字母和数字组成的长度不超过20的字符串，代表这个水王的ID，第二行一个高精度的整数(非负数)，代表这个水王的发贴数。注意，这个整数的首位没有不必要的0。
所有水王发贴数数字的总长度（注意，是总长度而不是总和）不会超过10000。除了子母、数字和必要的换行，输入中不会出现空格等字符。
Output
依次输出按照发贴数从大到小排好序的各位水王的ID，每个ID占据单独的一行。不能有任何多余的字符。若几个ID的发贴数相同，则按照ID的字典顺序先后排列。
*/
#include<stdio.h>
#include<string.h>
int statmp(char w1[],char w2[]);
void main(){
	int m,i,j,p,x,loc[1001]={0},flag;
	char name[1001][22],num[12000],s[22];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%s",name[i]);
        scanf("%s",&num[loc[i]]);
		loc[i+1]+=loc[i]+strlen(&num[loc[i]])+1;
	}
	for(i=0;i<m-1;i++){
		p=i;
		for(j=i+1;j<m;j++){
			flag=statmp(&num[loc[p]],&num[loc[j]]);
			if(flag<0){
				p=j;
			}
		    if(flag==0){
				if(strcmp(name[p],name[j])>0){
					p=j;
				}
			}
		}
	    if(p!=i){
			x=loc[i];strcpy(s,name[i]);
			loc[i]=loc[p];strcpy(name[i],name[p]);
			loc[p]=x;strcpy(name[p],s);
	    }
   }
   for(i=0;i<m;i++){
	   printf("%s\n",name[i]);
   }
}
int statmp(char w1[],char w2[]){
	int l1,l2,i;
	l1=strlen(w1);
	l2=strlen(w2);
	if(l1>=l2){
		if(l1>l2)
			return 1;
		else{
			for(i=0;i<l1;i++){
				if(w1[i]!=w2[i])
                return w1[i]-w2[i];
			}
			if(i==l1) 
				return 0;
        }
    }else
		return -1;
}
