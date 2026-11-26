// wap to find maximum from 3 numbers using nested if else.

#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter value A:");
	scanf("%d",&a);
	
	printf("Enter value B:");
	scanf("%d",&b);
	
	printf("Enter value C:");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is Maximum !");
		}
		else
		{
			printf("c is Maximum !");
		}
	}
	
	else
	{
		if(b>c)
		{
				printf("B is Maximum !");
		}
		else
		{
				printf("c is Maximum !");
		}
	}
}
