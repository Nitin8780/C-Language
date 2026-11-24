// TEMPERATURE CONVERTER 

#include<stdio.h>
#include<conio.h>

int main()

{
	
	float celsius;
	float fahrenheit;
	
	printf("The temperature in Celsius :");
	scanf("%f",&celsius);
	
	fahrenheit= (celsius * 9/5) + 32;
	
	printf("The temperature in Fahrenheit %.1f",fahrenheit);
	
}
