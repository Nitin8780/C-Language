// wap to find minimum from 3 numbers using nested if else.

#include<stdio.h>

int main()
{
	int x,y,z;
	

	printf("Enter the value of X :");
	scanf("%d",&x);
	
	printf("Enter the value of Y :");
	scanf("%d",&y);
	
	printf("Enter the value of Z :");
	scanf("%d",&z);
	
	if(x<y)
	{
		if(x<z)
		{
			printf("X is Minimum !");
		}
		else
		{
			printf("Z is Minimun !");
		}
	}
	else
	{
		if(y<z)
		{
			printf("Y is Minimum !");
		}
		else
		{
			printf("Z is Minimum !");
		}
	}
}
