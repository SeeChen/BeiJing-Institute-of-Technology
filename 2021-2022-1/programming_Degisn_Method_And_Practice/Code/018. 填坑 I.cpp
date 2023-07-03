/*
Description
又是北湖深坑，惊不惊喜，意不意外？！
R o a r k 觉得用水填湖太没意思了，用石头填坑多有意思。
假设北湖的地面还是一维的，每一块宽度都为1，高度是非负整数，用一个数组来表示。
现提供不限量的 1 乘號 2 规格的石头，问是否可以将北湖填平。（所有地面到达同一高度即为填平）
注：石头只能水平或垂直填放。
Input
样例有多组输入至文件末尾；
每组用例占两行；
第一行输入1个整数 n 空格 左小括號 1 小於等於 n 小於等於 2 乘號 10 的 5 次方 右小括號 表示北湖地面总宽度；
第二行输入 n 个整数 a 下標 i 空格 左小括號 0 小於等於 a 下標 i 小於等於 1 e 9 右小括號 ,用空格间隔，表示地面高度。
Output
若能填平则输出“YES”，否则输出“NO”。
*/
// https://www.geeksforgeeks.org/stack-in-cpp-stl/
#include <cstring>
#include <iostream>
#include <stack>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n,i;
	long long int temp;
	while(scanf("%d",&n)!=EOF){
		stack<long long int> a;
		for(i=0;i<n;i++){
			scanf("%lld",&temp);
			if(a.empty())
				a.push(temp);
			else{
				if((temp%2==0 && a.top()%2==0) || (temp%2!=0 && a.top()%2!=0))
					a.pop();
				else
					a.push(temp);
			}
		}
		if(a.size()<2)
			cout << "YES" << endl;
		else
			cout << "NO" <<endl;
	}
}
