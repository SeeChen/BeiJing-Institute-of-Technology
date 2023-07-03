/*
2009年3月9日起，北京市允许机动车所有人自己编写小汽车的以“京N”开头的号牌的后5位。
自编小汽车号牌的规则如下：号牌号码的最后一位必须为数字，其余四位有且必须有两位为大写英文字母（字母I、O不可用）。例如：京NAB999，京NC9D99，京NE99F9，京N9GH99，京N9J9K9，京N99LM9等。
输入：
    5位自编号牌 
输出：
    判断自编号牌是否合法
*/
#include <stdio.h>
#define N 5
int pjdr(char*c){
	int i,zimu=0;
	if(c[N-1]>'9'||c[N-1]<'0'){
		return 0;
	}else{
		for(i=0;i<N;i++){
			if(c[i]>='A'&&c[i]<='Z')
				zimu+=1;
			if(c[i]=='I'||c[i]=='O')
				return 0;
		}
		if(zimu<2)
			return 0;
		
	}
}
int main(){
	int r=1;
	char c[N+1];
	gets(c);
	r=pjdr(c);
	if(r==0)
		printf("no.");
	else
		printf("ok.");
	printf("\n");
}
