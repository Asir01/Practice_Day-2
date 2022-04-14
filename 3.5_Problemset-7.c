#include <stdio.h>
float temp_farenheit;
float temp_celsius;

int main() {
	printf("Enter temperature in Celsius = ");
	scanf("%f", &temp_celsius);

	temp_farenheit = ((9.0 / 5.0) * temp_celsius) + 32.0;
	printf("Temperature in Fahrenheit = %.1f", temp_farenheit);

	return(0);
}
