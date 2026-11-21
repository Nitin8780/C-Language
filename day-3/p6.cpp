//WAP to Perimeter of circle.

#include<stdio.h>
#include<conio.h>

int main()
{
	
	float pi=3.14;
	float radius;
	float circle;
	
	printf("Enter the radius:");
	scanf("%f",&radius);
	
	circle= radius * pi * pi;
	printf("%.2f Permiter of circle:",circle);
	
}
