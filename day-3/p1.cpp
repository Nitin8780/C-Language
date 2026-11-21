#include<stdio.h>
#include<conio.h>

int main()
{	
	//WAP to find area of circle 
	float pi=3.14;
	float r;
	float area;
	printf("Enter redius to calulate=");
	scanf("%f",&r);
	
	area= pi * r * r;
	printf("Area of circle:%.0f",area);
	
}
 
