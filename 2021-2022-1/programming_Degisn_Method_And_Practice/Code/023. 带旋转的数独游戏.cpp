/*
Description
数独是一个基于逻辑的组合数字放置拼图，在世界各地都很受欢迎。
在这个问题上，让我们关注 16 乘號 16 网格的拼图，其中包含 4 乘號 4 个区域。 目标是用十六进制数字填充整个网格，即 0123456789 A B C D E F，以便每列，每行和每个区域包含所有十六进制数字。
下图显示了一个被成功解决的数独例子：
http://lexue.bit.edu.cn/pluginfile.php/443734/mod_programming/intro/C642-1010-1.jpg
昨天，周老师解决了一个数独并将其留在桌面上。 然而，龙龙想和他开个玩笑——龙龙打算对这个已经解决的数独进行多次以下操作。
 选择一个  4 乘號 4 的小区域并顺时针旋转 90 度。
周老师回来发现他拼好的数独板被打乱了，开始挠头，你能帮他以最小的步数恢复原样吗？请你手把手的教他怎么做，也就是需要输出方案。
请注意选择要旋转的方块不能跨越任何小区域，也就是说必须选择一块完整的小区域旋转。小区域的定义在上面，16 乘號 16 的网格被分成 4 乘號 4 个小区域。
Input
第一行输入一个正整数 T 空格 左括号 1 小於等於 T 小於等於 10 立方 右括号 表示数据组数；
接下来每组数据输入一个 16 乘號 16 的数独图，表示被龙龙打乱后的数独面板。
Output
对于每组数据：
第一行输出一个整数 a n s ，表示周老师最少需要逆时针旋转多少次才能恢复原样。
接下来输出 a n s 行，每行两个数p 下標 x 空格 空格 空格 p 下標 y，表示逆时针旋转一次第p 下標 x行第p 下標 y列的小矩阵。
*/
#include <bits/stdc++.h>
using namespace std;
char mp[16][16],mp2[16][16],rot2[4][4],x[16];
int rot[4][4],c[16],flag=0;
int checkRow(int u){
	for(int i=0;i<16;i++){
		switch(mp[u][i]){
			case '0':
				c[0]++;break;
			case '1':
				c[1]++;break;
			case '2':
				c[2]++;break;
			case '3':
				c[3]++;break;
			case '4':
				c[4]++;break;
			case '5':
				c[5]++;break;
			case '6':
				c[6]++;break;
			case '7':
				c[7]++;break;
			case '8':
				c[8]++;break;
			case '9':
				c[9]++;break;
			case 'A':
				c[10]++;break;
			case 'B':
				c[11]++;break;
			case 'C':
				c[12]++;break;
			case 'D':
				c[13]++;break;
			case 'E':
				c[14]++;break;
			case 'F':
				c[15]++;break;
		}
	}
	for(int i=0;i<16;i++)
		if(c[i]==0 || c[i]>1){
			memset(c,0,sizeof(c));
			return 0;
		}
	memset(c,0,sizeof(c));
	return 1;
}
int restore(int x,int y){
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			mp[(x-1)*4+i][(y-1)*4+j]=mp2[(x-1)*4+i][(y-1)*4+j];
	return 0;
}
int rotation(int n,int x,int y){
	for(int i=0;i<n;i++){
		for(int j=3;j>=0;j--)
			for(int k=0;k<4;k++)
				rot2[3-j][k]=mp[k+(x-1)*4][j+(y-1)*4];
		for(int jj=0;jj<4;jj++)
			for(int kk=0;kk<4;kk++)
				mp[jj+(x-1)*4][kk+(y-1)*4]=rot2[jj][kk];
	}
	rot[x-1][y-1]=n;
	return 0;
}
int dfs(int u,int v){
	if(flag==1)
		return 0;
	if(v==4){
		for(int i=0;i<4;i++){
			rotation(i, u, v);
			if(checkRow((u-1)*4)==1){
				flag=1;
				return 0;
			}else{
				restore(u,v);
				rot[u-1][v-1]=0;
			}
		}
	}else
		for(int i=0;i<4;i++){
			rotation(i,u,v);
			dfs(u,v+1);
			if(checkRow((u-1)*4)==1){
				flag=1;
				return 0;
			}else
				restore(u, v);
		}
	return 0;
}
int checkCol(){
	for(int i=0;i<16;i++){
		switch(x[i]){
			case '0':
				c[0]++;break;
			case '1':
				c[1]++;break;
			case '2':
				c[2]++;break;
			case '3':
				c[3]++;break;
			case '4':
				c[4]++;break;
			case '5':
				c[5]++;break;
			case '6':
				c[6]++;break;
			case '7':
				c[7]++;break;
			case '8':
				c[8]++;break;
			case '9':
				c[9]++;break;
			case 'A':
				c[10]++;break;
			case 'B':
				c[11]++;break;
			case 'C':
				c[12]++;break;
			case 'D':
				c[13]++;break;
			case 'E':
				c[14]++;break;
			case 'F':
				c[15]++;break;
		}
	}
	for(int i=0;i<16;i++)
		if(c[i]==0||c[i]>1){
			memset(c,0,sizeof(c));
			return 0;
		}
	memset(c,0,sizeof(c));
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
	int T;
	scanf("%d",&T);
	while(T--){
		flag=0;
		for(int i=0;i<16;i++){
			scanf("%s",&mp[i]);
			for(int j=0;j<16;j++)
				mp2[i][j]=mp[i][j];
		}
		for(int i=1;i<5;i++){
			flag=0;
			dfs(i,1);
		}
		for(int i1=0;i1<2;i1++){
			for(int i2=0;i2<2;i2++){
				for(int i3=0;i3<2;i3++){
					for(int i4=0;i4<2;i4++){
						x[0]=mp[0][0+i1*3];
						x[1]=mp[1][0+i1*3];
						x[2]=mp[2][0+i1*3];
						x[3]=mp[3][0+i1*3];
						x[4]=mp[4][0+i2*3];
						x[5]=mp[5][0+i2*3];
						x[6]=mp[6][0+i2*3];
						x[7]=mp[7][0+i2*3];
						x[8]=mp[8][0+i3*3];
						x[9]=mp[9][0+i3*3];
						x[10]=mp[10][0+i3*3];
						x[11]=mp[11][0+i3*3];
						x[12]=mp[12][0+i4*3];
						x[13]=mp[13][0+i4*3];
						x[14]=mp[14][0+i4*3];
						x[15]=mp[15][0+i4*3];
						if(checkCol()==1)
							goto p;
						for(int m=0;m<4;m++)
							rot[3][m]=(rot[3][m]+2)%4;
					}
					for(int m=0;m<4;m++)
						rot[2][m]=(rot[2][m]+2)%4;
				}
				for(int m=0;m<4;m++)
					rot[1][m]=(rot[1][m]+2)%4;
			}
			for(int m=0;m<4;m++)
				rot[0][m]=(rot[0][m]+2)%4;
		}
		p:
		int total=0,total1=0;
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++){
				total=rot[i][j]+total;
				total1=(rot[i][j]+2)%4+total1;
			}
		if(total<total1){
			printf("%d\n",total);
			for(int i=0;i<4;i++)
				for(int j=0;j<4;j++)
					for(int k=0;k<rot[i][j];k++)
						printf("%d %d\n",i+1,j+1);
		}else{
			printf("%d\n",total1);
			for(int i=0;i<4;i++)
				for(int j=0;j<4;j++)
					for(int k=0;k<(rot[i][j]+2)%4;k++)
						printf("%d %d\n",i+1,j+1);
		}
	}
}
