/*
Description
emmm，还是北湖深坑，不用惊喜，不用意外
我们继续用石头填！
北湖的地面依旧是一维的，每一块宽度都为1，高度是非负整数，用一个数组来表示。
还是提供不限量的 1 乘號 2 规格的石头。
但是这一次是 D a r k D a w n 来填坑，他有很强烈的强迫症，所有的石头只能水平摆放（宽为2，高为1）。
问这样是否可以将北湖填平。（所有地面到达同一高度即为填平）
Input
样例有多组输入至文件末尾；
每组用例占两行；
第一行输入1个整数 n 空格 左小括號 1 小於等於 n 小於等於 2 乘號 10 的 5 次方 右小括號 表示北湖地面总宽度；
第二行输入 n 个整数 a 下標 i 空格 左小括號 0 小於等於 a 下標 i 小於等於 1 e 9 右小括號 ,用空格间隔，表示地面高度。
Output
若能填平则输出“YES”，否则输出“NO”。
*/
#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n,i;
	long long int temp;
	while(scanf("%d",&n)!=EOF){
		long long int max=0;
		stack<long long int> a;
		bool diff=false;
		for(i=0;i<n;i++){
			scanf("%lld",&temp);
			if(temp>=max)
				max=temp;
			if(a.empty()){
				a.push(temp);
			}else if(temp>a.top()){
				diff=true;
			}else if(temp==a.top()){
				a.pop();
			}else
				a.push(temp);
		}
		if(diff)
			cout << "NO" << endl;
		else if(a.size()==0)
			cout << "YES" << endl;
		else if(a.size()==1){
			if(a.top()==max)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}else if(a.size()>1)
			cout << "NO" << endl;
	}
}
