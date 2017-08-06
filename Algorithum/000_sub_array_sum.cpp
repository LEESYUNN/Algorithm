#include <vector>
#include <cstdio>
#include <map>

#include <iostream>
using namespace std; 

vector<int> vec = { -3, 1, 2, -3, 4, -1 };

const int SIZE = vec.size(); 

int mains_sub_array() {

	vector<int> result; 

	int current_sum = 0;
	
	vector<int> sum_i; 

	
	
	for (int i = 0; i < vec.size(); ++i) {

		current_sum += vec[i];

		if (0 == current_sum) {
			result.push_back(0);
			result.push_back(i);
			break;
		}

		auto iter = find(sum_i.begin(), sum_i.end(), current_sum);
		
		// 下式::找到的话  |  没找到 =>  iter == sum_i.end(); 
		if (iter != sum_i.end()) {

			result.push_back(iter - sum_i.begin() + 1);
			result.push_back(i);
		}

		sum_i.push_back(current_sum);
	}

	for (int i : result) {
		printf("%d \n", i);
	}

	printf("==============\n"); 

	result.clear(); 
	
	map<int, int> hash; 

	hash[0] = 0;
	/*
	auto it = hash.end();
	it--;
	std::cout << it->first << std::endl;
	
	auto it = hash.find(0); 

	std::cout << "Find Value" << it->second << "Find Key => " <<  it->first << std::endl;
	*/
	int curr_sum = 0; 

	
	for (int i = 0; i < SIZE; ++i) {

		curr_sum += vec[i];
		
		if (hash.find(curr_sum) != hash.end()) {

			result.push_back(hash[curr_sum]);
			result.push_back(i);
		}
		else {
			hash[curr_sum] = i + 1; 
		}
	}

	for (int i : result) {
		printf("%d \n", i);
	}

	return 0;
}