#include <cstdio>

const int LENGHT = 5; 
typedef struct _array {
	int array[LENGHT]; 
}Array;

int main_array_value() {

	int i = 0; 
	int a1[LENGHT] = { 0 }; 
	int a2[LENGHT] = { 0 }; 
	
	Array a3, a4; 

	for (i = 0; i < LENGHT; ++i) {
		a1[i] = i + 1; 
	}
	
	return 0; 
}