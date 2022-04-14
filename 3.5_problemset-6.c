#include <stdio.h>
int main() {
	int hour;
	double value, salary;
	printf("Input the working hrs:");
	scanf("%d", &hour);
	printf("Salary amount/hr:");
	scanf("%lf", &value);
	salary = value * hour;
	printf("Salary = %.2lf",salary);
	return 0;
}

