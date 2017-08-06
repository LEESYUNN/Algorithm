#include <cstdio>

int Fibonacci(int n) {
	if (n < 0) {
		return -1; 
	}
	
	if (n == 0 || n == 1) {
		return 1; 
	} 
	else {
		return (Fibonacci(n - 1) + Fibonacci(n - 2));
	}
}

int main_Fibonacci() {
	
	int result = 0; 
	
	result = Fibonacci(10); 
	
	if (result > 0) {
		printf("%d \n", result); 
	}


	return 0;
}