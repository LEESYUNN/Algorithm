#include <iostream>
#include <cstdio>

using namespace std;

void hannoi(int n, char A, char B, char C) // 把A盘里面的圆圈转移到C盘里面【A --> C】。
{
	if (n == 1) {

		// N == 1 时 从 A -> C 移动
		cout << "移动圆圈" << n << "从盘" << A << "盘" << C << endl; 
	}
	else{
		// N ！= 1 时  把 N-1个盘 -> 当前的空柱 
		hannoi(n - 1, A, C, B); // 把N-1个圆环从起点盘移动到（当前）没有任何圆环的过度盘；通过B、C盘在此函数调用中调用位置的互换，来实现把N-1个圆环从A盘到B盘的转移【A--B】。
		
		cout << "移动圆圈" << n << "从盘" << A << "盘" << C << endl;

		hannoi(n - 1, B, A, C); // 把N-1个圆环 从 过度盘 -> 目标盘（模仿1和2的操作方法来实现）；通过A、B盘在此函数调用中位置的互换，来实现N-1个圆环从B盘到C盘的转移【B--C】。
	}
}
/*
int main_hannuo()
{
	int n = 0;

	cin >> n;

	hannoi(n, 'a', 'b', 'c');

	// system("pause");
	return 0;
}

*/