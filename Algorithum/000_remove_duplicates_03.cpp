#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;


int main_remove_duplicates_03() {

	vector<int> v = { 1, 2, 2, 2,2 , 4, 5, 6, 6 ,8 , 10 };

	if (v.size() <= 2) printf("%d\n", v.size());

	int length = v.size();

	int newIndex = 0;

	vector<int> result = {};

	for (auto iter = v.begin(); iter != v.end(); ++iter) {

		if (result.empty()) {
			result.push_back(*iter);
		}
		if (*iter != result.back()) {
			result.push_back(*iter);
		}
	}

	for (int i : result) {
		std::cout << i << std::endl;
	}
	
	return 0;
}