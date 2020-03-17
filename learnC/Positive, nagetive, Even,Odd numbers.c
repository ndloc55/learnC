#include<stdio.h>
#include<stdbool.h>

void poNa(int a) {
	if (a > 0)
	{
		printf(" %d is Positive number", a);
	}
	if (a < 0)
	{
		printf(" %d is Nagetive number", a);
	}
}

void evOd(int a) {
	if (a % 2 == 0)
	{
		printf("\n %d is Even number", a);
	}
	else {
		printf("\n %d is Odd number", a);
	}
}

int main() {
	int a;
	printf("Please! Input number a: ");
	scanf("%d", &a);
	poNa(a);
	evOd(a);
	return 0;
}