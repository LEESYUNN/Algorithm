#include <cstdio>
#include <algorithm>

int main_GCD() {
	
	int a, b, gcd, temp, ta, tb; 
	
	int mod = 0; 
	
	a = b = gcd = temp = ta = tb = 0;

	printf("Please input 2 Number for get The GCD of thum \n");

	scanf_s("%d %d", &a, &b); 
	
	if (a < 0 || b < 0) {
		printf("Bad input Number\n");
		return 0; 
	}

	if (a < b) {
		std::swap(a, b); 
	}
	
	ta = a; 
	tb = b; 
	mod = a%b; 
	
	while (mod != 0) {
		ta = tb; 
		tb = mod; 
		mod = ta% tb;
	}
	
	printf("The GCD of %d and %d is : %d \n", a, b, tb, tb);

	return 0;
}