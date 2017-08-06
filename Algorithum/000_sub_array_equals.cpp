#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main_sub_array_equals() {

	const int finded = 33;

	vector<int> v = { 1, 4, 20, 3, 10, 5 };

	vector<int> result; 
	
	map<int, int> hash; 
	
	hash[0] = 0;

	int curr_sum = 0;
	
	for (int i = 0; i < v.size(); ++i) {

		curr_sum += v[i];

		if (hash.find(curr_sum - finded) != hash.end()) {
			result.push_back(hash[curr_sum - finded]);
			result.push_back(i);
		}
		else {
			hash[curr_sum] = i + 1; 
		}
	}

	for (int i : result) {
		std::cout << i << std::endl;
	}

	return 0;
}