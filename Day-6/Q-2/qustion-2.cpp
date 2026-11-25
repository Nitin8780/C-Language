//WAP TO CHECK NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL USING NESTED IF ELSE.

#include<stdio.h>
#include<conio.h>

int main()
{
	
	int a;
	
	printf("Enter the Value of A:");
	scanf("%d",&a);
	
	if(a>=1)
	{
		printf(" This is a Positive Number");
	}
	else if(a<0)
	{
		printf("This is a Negative Number");
	}
	else if(a==0)
	{
		printf("This is a Neutral Number");
	}
}
