//	WAP to Find min. no. from given 2 no. using if else.

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("Enter Number of A:");
	scanf("%d",&a);
	
	printf("Enter Number of B:");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf(" This is a smallest Number A:%d",a);
	}
	else
	{
		printf(" This is a Smallest number B:%d",b);
	}
}
