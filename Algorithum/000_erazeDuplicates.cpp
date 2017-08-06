#include <vector>
#include <cstdio>

std::vector<int> v = { 1, 1, 2, 2, 5, 5, 6, 10, 10};
// main_erazeDuplicates01
int main_erazeDuplicates01() {
	
	if (v.size() <= 1) return v.size(); 
	
	int length = v.size(); 

	int newIndex = 0; 
	
	
	
	for (int i = 1; i < length; ++i) {

		// newIndex 从 0 开始的理由  <- 霸气！！ 
		if (v[i] != v[newIndex]) {
			newIndex++; 
			v[newIndex] = v[i];
		}
	}
	
	printf("Vector<int>'s Size => %d \n", length); 
	printf("Vector<int>'s New  => %d \n", newIndex + 1);
	
	


	return 0; 
}