#include <set>
#include <vector>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;


typedef set<int> SET; 

map<SET, int> IdCache; // �Ѽ��� ӳ��� ID

vector<SET> setCache;  // ���� ID ȡ���� 


// ���Ҹ�����x��ID    ����Ҳ����ķ���һ����ID
int ID(SET x) {

	if (IdCache.count(x)) {
		return IdCache[x];
	}
	
	setCache.push_back(x);  // ���

	return IdCache[x] = setCache.size() - 1;  // ���
}

int main_stack_computer() {

	stack<int> s; // ��Ŀ�е� ջ

	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {

		string op; 

		cin >> op; 
		
		if (op[0] == 'P') {
			s.push(ID(SET()));
		}
		else if (op[0] == 'D') {
			s.push(s.top()); 
		} 
		else {

			SET x1 = setCache[s.top()]; 
			s.pop(); 

			SET x2 = setCache[s.top()]; 
			s.pop();

			SET x; 
			
			if (op[0] == 'U') {
				set_union(x1.begin(), x1.end(), 
						  x2.begin(), x2.end(), 
						  inserter(x, x.begin())
						 );
			}

			if (op[0] == 'I') {
				set_intersection(x1.begin(), x1.end(), 
								 x2.begin(), x2.end(), 
								 inserter(x, x.begin())
								);

			}

			if (op[0] == 'A') {
				x = x2;  
				x.insert(ID(x1));
			}
			
			s.push(ID(x));
		}
	}
	
	cout << setCache[s.top()].size() << std::endl;

	return 0;
}