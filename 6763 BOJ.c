#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= b)
		printf("Congratulations, you are within the speed limit!");
	else {
		if (b - a <= 20) printf("You are speeding and your fine is $100.");
		else if (b-a<=30) printf("You are speeding and your fine is $270.");
		//prerequisite is (b-a)>20
		else printf("You are speeding and your fine is $500.");
	}

	return 0;
}