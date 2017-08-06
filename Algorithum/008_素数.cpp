#include <cstdio>

int main_primeNumber() {

	int index, step;

	int i = 0;

	int res[100] = {};
	index = 0;
	step = 0;

	printf("Show the Prime Number of [1 - %d] \n", 100);

	for (index = 1; index <= 100; ++index) {
		
		for (step = 2; step * step <= 100; ++step) {

			if (index != step && index % step == 0) {
				break; 
			}
		}
		printf("index=> %d, step => %d,  step**2 => %d \n",  index, step, step * step);
		
		if (step * step > 100) {
			res[i] = index; 
			++i;
		}
	}

	printf("===================\n");

	while (i-- > 0) {
		printf("%d \n", res[i]);
		
	}


	return 0; 
}