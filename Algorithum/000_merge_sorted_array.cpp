#include <cstdio>
#include <vector>

using namespace std; 


int main_merge_sorted_array() {
	/*
	vector<int> v1 = { 1, 2, 3, 4, 5 }; 
	vector<int> v2 = { 6, 7, 8 }; 
	
	int size1 = v1.size(); 
	int size2 = v2.size(); 
	
	int index = size1 + size2 - 1; 

	while (size1 > 0 && size2 > 0) {

		if (v1[size1 - 1] > v2[size2 - 1]) {

			v1[index] = v1[size1 - 1];
			size1--; 
		}
		else {
			v1[index] = v2[size2 - 1];
			size2--; 
		}

		index--;
	}


	while (size2 > 0) {
		v1[index] = v2[size2 - 1]; 
		size2--; 
		index--; 
	}
	*/
	vector<int> A = { 1, 2, 3, 4, 5, 0 , 0, 0};
	vector<int> B = { 6, 7, 8 };


	int m = A.size();
	int n = B.size();
	

	int index = m + n - 1;

	while (m > 0 && n > 0) {
		if (A[m - 1] > B[n - 1]) {
			A[index] = A[m - 1];
			--m;
		}
		else {
			A[index] = B[n - 1];
			--n;
		}
		--index;
	}

	// B has elements left
	while (n > 0) {
		A[index] = B[n - 1];
		--n;
		--index;
	}

	for (auto i : A) {
		printf("%d \n", i);
	}
	

	return 0; 
}