#include <iostream>
#include <string>
#include <set>
#include <sstream>

using namespace std; 

set<string> dict; 

int main_andy_dict() {

	string s = "Two blondes were going to Disneyland when they came to a fork in the";
	string buf;
	for (int i = 0; i < s.length(); i++) {

		if (isalpha(s[i])) {
			s[i] = tolower(s[i]); 
		}
		else {
			s[i] = ' '; 
		}
		
	}
	stringstream ss(s);

	std::cout << s << std::endl;
	/*
	while (ss >> buf) {
		dict.insert(buf);
	}
	
	for (auto iter = buf.begin(); iter != buf.end(); ++iter) {
		std::cout << *iter << std::endl;
	}

	*/

	return 0; 
}