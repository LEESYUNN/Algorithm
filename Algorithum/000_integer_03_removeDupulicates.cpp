#include <iostream>
#include <vector>
#include <cstdio>

using namespace std; 


int main_000000() {

	vector<int> v = { 1, 2, 2, 2,2 , 4, 5, 6, 6 ,8 , 10 };

	if (v.size() <= 2 ) printf("%d\n", v.size());
	
	int length = v.size(); 
	
	int newIndex = 1; 
	
	vector<int> result = {};
	
	for (int i = 2; i < length; ++i) {

		if (v[i] != v[newIndex] || v[i] != v[newIndex - 1])  {
			
			newIndex++; 

			result.push_back(v[i]);
		}
	}
	

	for (int i : result) {
		std::cout << i << std::endl;
	}
	return 0;
}