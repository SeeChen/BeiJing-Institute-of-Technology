/*
要求源代码中给出求解过程和注释，不能直接输出结果。
设A={x|x属于R, x不等于0,1}，在A上定义6个函数，
f1(x)=x,  f2(x)=x-1, f3(x)=1-x,
f4(x)=(1-x)-1, f5(x)=(x-1)x-1, f6(x)= x(x-1)-1，
*运算为函数的复合运算， 求函数的逆元。
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int func[6] = {1, 2, 3, 4, 5, 6};
	
	// 初始化函数字符串
	int ct[6][6] = {{1,2,3,4,5,6},
					{2,1,4,3,6,5},
					{3,5,1,6,2,4},
					{4,6,2,5,1,3},
					{5,3,6,1,4,2},
					{6,4,5,2,3,1}};
	
	// 将f1(x)=x,f2(x)=x-1, f3(x)=1-x,f4(x)=(1-x)-1, f5(x)=(x-1)x-1, f6(x)= x(x-1)-1 
	// 编号为0-5，进行复合运算，得到二维运算表ct，其行标0-5、列标0-5分别代表 f1-f6
	int uni = 0, flag;
	
	// 寻找幺元
	for (int k = 0; k < 6; ++k){
		flag = 1;
		
		// 根据运算表行判断是否是左幺元 
		for (int i = 0; i < 6; ++i)
			for (int j = 0; j < 6 ; ++j)
				if (ct[i][j] != func[i])
					flag = 0;	
		
		// 根据运算表列判断是否是右幺元
		for (int j = 0; j < 6; ++j)
			for (int i = 0;i < 6; ++i)
				if (ct[i][j] != func[j])
					flag = 0;
		
		// 找到幺元
		if (flag){
			uni = k;
			break;
		}
	}
	char get[3];
	scanf("%s", get);
	
	// 在函数字符串里找到输入函数的下标
	int g = get[1] - '0' - 1;
	
	// 根据运算表寻找逆元，与get函数左右相乘的结果均为幺元的函数即为其逆元 
	for (int i = 0; i < 6; ++i){
		// 若uni不初始化，gcc-3.3就会无效内存引用(gcc-4.8不会)
		if (ct[g][i] == func[uni] && ct[i][g] == func[uni]){
			printf("f%d\n",i+1);
			break;
		}
	}
	return 0; 
}