// wap to convert meter into km

#include<stdio.h>
#include<conio.h>

int main()
{
	
	float meter;
	float km;
	
	printf("Enter the meter to convert to km:");
	scanf("%f",&meter);
	
	km= meter / 1000 ;
	printf("%f KM is :",km);
}
