#include <stdio.h>
#include <math.h>

int main(void)
{
	double amount, principal,rate;
	int year;
	principal = 1000;

	for (rate = 10; rate <= 12; rate=rate+0.5) {
		printf("====== %f percentage ======\n", rate);
		printf("%4s%21s\n", "Year", "Amount on deposit");

		for (year = 1; year <= 10; year++) {
			amount = principal * pow(1.0 + (rate * 0.01), year);
			printf("%4d%21.2f\n", year, amount);
		} 

	} 
	return 0;
}