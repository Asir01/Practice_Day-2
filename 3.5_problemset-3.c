#include<stdio.h>
int main()
{
	int num1,num2,product;
	printf("First Number:");
	scanf("%d" ,&num1);
	printf("Second Number:");
	scanf("%d",&num2);
	product=num1+num2;
	printf("sum: %d\n",product);
	product= num1-num2;
	printf("Difference: %d\n",product);
	product= num1*num2;
	printf("Product: %d\n",product);
	product= num1/num2;
	printf("Quotient: %d\n",product);
	product= num1%num2;
	printf("Modulus: %d",product);
	return  0;
}

