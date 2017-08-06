#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> cnt;

vector<string> words;

string repr(const string& str) {
	string ans = str;
	for (unsigned int i = 0; i < str.length(); ++i) {
		ans[i] = tolower(ans[i]);

	}

	sort(ans.begin(), ans.end());

	return ans;
}

int main156() {

	int n = 0;

	string s = "ladder came tape soon leader acme RIDE lone Dreis peat";

	int index = 0;

	for (int i = 0; i < s.size(); ++i) {

		if (s[i] == ' ') {
			// words.push_back(s.substr(index, i));
			index = i + 1;
		}
	}

	for (string str : words) {
		std::cout << str << std::endl;
	}

	std::cout << "==========" << std::endl;
	//words.push_back(s);
	//words.push_back("ScAlE orb eye Rides dealer NotE derail LaCeS drIed");
	// if (intput[0] == '#') break;

	string r = repr(s);

	if (cnt.count(r)) {
		cnt[r] = 0;
	}
	else {
		cnt[r]++;
	}


	vector<string> ans;

	for (int i = 0; i < words.size(); ++i) {
		if (cnt[repr(words[i])] == 1) {
			ans.push_back(words[i]);
		}
	}

	sort(ans.begin(), ans.end());

	for (unsigned int i = 0; i < ans.size(); ++i) {
		std::cout << ans[i] << std::endl;
	}

	return 0;
}

int main_anagram156() {

	vector<string> v;

	string s = "ladder came tape soon leader acme RIDE lone Dreis peat";
	
	if (s.find(" ")) {
		std::cout << "Finded" << std::endl;
	}


	int index = 0;

	int pos = 0;

	for (int i = 0; i < s.size(); ++i) {

		if (s[i] == ' ') {

			v.push_back(s.substr(index, pos));

			index = i + 1;

			pos = 0;

		}

		pos++;

		if (i == s.size() - 1) {
			v.push_back(s.substr(index, pos));
		}
	}

	for (string t : v) {
		std::cout << t << std::endl;
	}

	

	return 0;


}