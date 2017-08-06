
#include <algorithm>

using namespace std; 


int main_dalishi() {

	int array[] = { 2, 3, 5, 1 };

	int x = 0;

	sort(array, array + 4);

	scanf_s("%d", &x); 
	
	int p = lower_bound(array, array + 4, x) - array; 
	
	if (array[p] == x) {
		printf("%d Found at %d \n", x, p); 
	} 
	else {
		printf("%d Not Found \n", x);
	}

	

	return 0;
}
