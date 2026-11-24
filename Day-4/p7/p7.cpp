//WAP to find a the answer given formula (x+y+z)2.

#include<stdio.h>
#include<conio.h>

int main()
{
	
	int x,y,z,total;
	
	printf("Enter the value of X :");
	scanf("%d",&x);	
	printf("Enter the value of Y :");
	scanf("%d",&y);	
	printf("Enter the value of Z :");
	scanf("%d",&z);	
	
	total=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x);
	
	printf("TOTAL ANSWER IS : %d",total);
}
