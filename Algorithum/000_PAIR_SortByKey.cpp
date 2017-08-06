#include <map>
#include <string>
#include <iostream>

using namespace std;

typedef pair<string, int> PAIR; 

ostream& operator << (ostream& out, const PAIR& p) {
	return out << p.first << "\t" << p.second; 
}

int main_map_sort_by_key() {

	map<string, int> yMap; 
	
	yMap["Limin"] = 100;
	yMap["Temp"] = 1000;
	yMap["Boost"] = 500; 
	
	yMap.insert(make_pair("beijing", 50));
	
	for (auto iter = yMap.begin(); iter != yMap.end(); ++iter) {
		std::cout << *iter << std::endl;
		
	}
	

	return 0;
}