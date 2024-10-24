#include <stdio.h>

int main(void)
{
	int j, i, number,space;
	number = 10;
	printf("(a)\n");
	for (i = 1; i <= number; i++) {

		for (j = 1; j <= i; j++) {
			printf("*");
		}

		printf("\n");
	} 
	printf("(b)\n");
	for (i = 1; i <= number; i++) {
		for (j = number; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	printf("(c)\n");
	for (i = 1; i <= number; i++) {

		for (space = 2; space <= i; space++) {
			printf(" ");
		}
		for (j = number; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	printf("(d)\n");
	for (i = 1; i <= number; i++) {

		for (space = 1; space <= number - i; space++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
