#include <map>
#include <string>
#include <cstdio>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>


typedef std::pair<char, int> PAIR;

struct CmpByValue{
	
	bool operator() (const PAIR& lhs, const PAIR& rhs) {
		return lhs.second < rhs.second; 
	}
};

int main_string_count_eraze() {

	std::string str = "HaEaLaLaObWORLDb";
	
	std::map<char, int> cnt; 

	for (unsigned int i = 0; i < str.size(); ++i) {

		char ch = str[i];

		if (!cnt.count(ch)) {

			cnt[ch] = 1;
		}
		else {
			
			cnt[ch] = cnt[ch] + 1;
		}
	}
	
	std::vector<PAIR> data(cnt.begin(), cnt.end());
	
	std::sort(data.begin(), data.end(), CmpByValue());
	/*
	for (unsigned int i = 0; i < data.size(); ++i) {
		std::cout << data[i].first << " " << data[i].second << std::endl;
	}
	*/
	char max = data.back().first;
	int count = data.back().second; 
	for(int i = 0 ;  i < count;  ++i) 
		str.erase(std::find(str.begin(), str.end(), max)); 

	std::cout << str << std::endl;

	return 0; 
}