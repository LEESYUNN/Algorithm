#include <cstdio>
#include <cmath>
#include <ctime>

int main_srand() {

	int ival = 0; 
	ival = rand() % 10; 
	printf("The random value is : %d\n", ival);

	srand(time(nullptr));
	
	ival = rand() % 10; 

	printf("The random Value is : %d \n", ival); 

	return 0; 
}