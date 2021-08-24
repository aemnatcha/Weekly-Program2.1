#include<stdio.h>
int main() {
	int num1, num2, num3, max;
	printf("input num1=");
	scanf_s("%d", &num1);
	printf("input num2=");
	scanf_s("%d", &num2);
	printf("input num3=");
	scanf_s("%d", &num3);
	if (num1 > num2 && num1 > num3)
		max = num1;
	else if (num2 > num1 && num2 > num3)
		max = num2;
	else
		max = num3;
	printf("max: %d", max);
	return 0;
}