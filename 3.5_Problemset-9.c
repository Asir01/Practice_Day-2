#include <stdio.h>
int main() {
	int days, year, month, day;
	printf("Input no. of days: ");
	scanf("%d", &days);
	year = (int) days/365;
	days = days-(365*year);
    month = (int)days/30;
	day = (int)days-(month*30);
	printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", year, month, day);
	return 0;
}
