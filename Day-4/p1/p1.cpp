//WAP to find a the answer given formula (x+y)2.

#include<stdio.h>
#include<conio.h>

int main()
{
	
	int x,y;
	int total;
	
	printf("Enter the value of X:");
	scanf("%d",&x);
	
	printf("Enter the vlaue of Y:");
	scanf("%d",&y);
	
	total= (x*x)+ 2*(x*y)+ (y*y);
	printf(" TOTAL AMOUNT :%d",total);
}
