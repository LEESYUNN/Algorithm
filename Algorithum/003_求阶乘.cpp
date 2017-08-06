#include <cstdio>

// µÝ¹é·½·¨
int Factorial(int n) {
	if (n < 0) {
		return -1;
	}

	if (n == 0) {
		return 1; 
	}
	else {
		return n * Factorial(n - 1); 
	}
}

int FactorialForLoop(int n) {
	int res = 1; 
	
	int i = 0; 
	
	if (n < 0) {
		return -1; 
	}
	if (n == 0) {
		return 1; 
	}
	
	for (int i = 0; i < n; ++i) {
		res *= (i + 1); 
	}

	return res; 
}

int main_Factorial() {

	int result = 0; 
	
	result = Factorial(10); 
	
	if (result > 0) {
		printf("%d\n", result); 
	}
	
	result = FactorialForLoop(10); 

	if (result > 0) {
		printf("%d\n", result);
	}

	return 0; 
}