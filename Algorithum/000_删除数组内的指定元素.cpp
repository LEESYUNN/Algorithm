#include <cstdio>
#include <vector>


using namespace std; 



int main_eraze_element() {

	vector<int> v = { 1, 2, 4, 4, 4, 5, 6, 7, 4 }; 
	
	vector<int> vec = { 1, 2, 4, 4, 4, 5, 6, 7, 4 };
	
	for (auto iter = v.begin(); iter != v.end(); ++iter) {

		if (*iter == 4) {
			iter = v.erase(iter); 
			iter--;
		}
	}

	for (int i : v) {
		printf("%d \n", i);
	}

	printf("====\n"); 
	
	int size = vec.size(); 

	for (int i = 0; i < size; ++i) {
		
		if (vec[i] == 4) {

			int temp = vec[size - 1];
			vec[size - 1] = vec[i];
			vec[i] = temp; 
			size--;
			i--;
		}
	}

	for (int i : vec) {
		printf("%d \n", i);
	}

	return 0; 
}


