/* 
看着这样的“回”形图案你晕吗？让我们不用数组，来做出它。
输入：
    n。正方形的边长
输出：
    边长为 n 的数字回形方阵。
*/
#include "stdio.h"
#define MAX 101
int main(int argc, char **argv){
	int i, j, n = 4;
	int arr[MAX][MAX];
	int state = 0, num = 0;
	int flag_count = 0;     //记录当前点的四周有几个点不能走
	scanf("%d", &n);
	getchar();
	//初始化
	for (i = 0; i <= n+1; i++){
		for (j = 0; j <= n+1; j++){	
			//加围墙，-1
			if (i == 0 || i == n+1 || j == 0 || j == n+1){
				arr[i][j] = -1;
				continue;
			}
			arr[i][j] = 0;
		}
	}
	//初始化后的矩阵
	for (i = 0; i <= n+1; i++){
		for (j = 0; j <= n+1; j++){
		}
	}
	i = 1; j = 1;
	while (1){
		//如果四个方向都走过了，说明已经结束了
		if (flag_count == 4){
			break;
		}
		//如果碰到已走过的，或者围墙，则退一步。退一步其实是为了改变方向
		//其实这个点就是需要改变方向的点
		if (arr[i][j] != 0){
			switch (state){
			case 0:           //当前方向为右，向左退
				j--;
				break;
			case 1:           //当前方向为下，向上退
				i--;
				break;
			case 2:           //当前方向为左，向右退
				j++;
				break;
			case 3:           //当前方向为上，向下退
				i++;
				break;
			}
			//改变方向
			state = (state + 1) % 4;
			flag_count++;
		}else{
			arr[i][j] = ++num;
			flag_count = 0;
		}
		switch (state){
		case 0:           //向右走
			j++;
			break;
		case 1:           //向下走
			i++;
			break;
		case 2:           //向左走
			j--;
			break;
		case 3:           //向上走
			i--;
			break;
		}
  }
	//输出结果
 	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){			
 			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
