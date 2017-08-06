#include <vector>
#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;



void reverse(vector<int> &vec, int start, int end) {
	for (unsigned int i = start, j = end; i < j; ++i, j--) {
		// 报错 -> 提示是vector 【坑】
		// std::swap<int>(vec[i], vec[j]);
		int temp = vec[j]; 
		vec[j] = vec[i]; 
		vec[i] = temp;
	}
}

void recoverRotatedSortedArray(vector<int>& vec) {

	for (unsigned int i = 0; i != vec.size() - 1; ++i) {
		if (vec[i] > vec[i + 1]) {
			reverse(vec, 0, i); 
			reverse(vec, i + 1, vec.size() - 1); 
			reverse(vec, 0, vec.size() - 1); 
		}
	}
}

int main_rotatedSoredArray() {
	
	vector<int> vec = { 4, 5, 1, 2, 3 };
	
	recoverRotatedSortedArray(vec);

	for (auto &i : vec) {
		std::cout << i << std::endl;
	}
	


	return 0;
}


