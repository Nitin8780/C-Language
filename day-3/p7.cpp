//wap to convert temrature celcius into farhenhight
#include<stdio.h>
#include<conio.h>

int main()
{
	
	float celcius;
	float farhenhight;
	
	printf("Enter the cecius:");
	scanf("%f",&celcius);
	
	farhenhight= celcius * 1.8 + 32 ;
	
	printf("%0.2fCelcius to farhenhight temature:",farhenhight);
}
