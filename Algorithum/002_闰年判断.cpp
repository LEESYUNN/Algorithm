#include <cstdio>

int LeapYear(int year) {
	
	int result = 0; 
	
	if (year <= 0 || year > 9999) {
		printf("The Year is not Correct Year. (Between 0 - 9999) \n");
		return 0; 
	}

	
	if (year % 400 == 0 || year % 4 && year % 100 != 0) {
		return 1; 
	}
	else {
		return 0; 
	}

}

int main_runnian() {
	int year = 0; 
	int result = 0; 
	
	printf("Please input a year, such as 2015 \n"); 
	scanf_s("%d", &year); 

	result = LeapYear(year); 
	
	if (result == 1) {
		printf("It is a Leap Year \n"); 
	}
	else if (result == 0) {
		printf("It is not a Leap Year \n"); 
	} 
	else {
		printf("Please check you input Years \n"); 
	}
	
	return 0;
}