//WAP to find a the answer given formula (x+y)3.

#include<stdio.h>
#include<conio.h>

int main()
{
	int x,y,total;
	
	printf("Enter the of value X :");
	scanf("%d",&x);
	printf("Enter the value of Y :");
	scanf("%d",&y);
	
	total=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	
	printf("TOTAL ANSWER IS :%d",total);
}


