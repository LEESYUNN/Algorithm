#include <cstdio> 
#include <stack>
#include <string>
#include <iostream>

bool paren(const std::string &str) {

	std::stack<char> s;

	for (unsigned i = 0; i < str.size(); ++i) {

		switch (str[i]) {
		case '(': s.push(str[i]); break;
		case '[': s.push(str[i]); break;
		case '{': s.push(str[i]); break;
		case ')':
			if (s.top() != '(') {
				return false;
			}
			else {
				s.pop(); break;
			}
		case ']':
			if (s.top() != '[') {
				return false; 
			}
			else {
				s.pop(); break; 
			}

		case '}':
			if (s.top() != '{') {
				return false;
			}
			else {
				s.pop(); break;
			}

		default : 
			break; 
		}
	}

	return s.empty();
}

int main_paren_match() {

	std::string strBuf = "()[][(){]"; 

	std::cout << strBuf << std::endl;
	
	if (paren(strBuf)) {
		printf("True \n");
	}
	else {
		printf("False \n");
	}

	return 0; 
}