//Tringle Angle Finder

#include<stdio.h>
#include<conio.h>

int main()
{
	int first,second,third;
	
	printf("Enter First Angle:");
	scanf("%d",&first);
	
	printf("Enter Second Angle:");
	scanf("%d",&second);
	
	third=180 - first -second;
	
	printf("Third Angle:%d",third);
	
}
