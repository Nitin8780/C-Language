 // wap to find maximum from 5 numbers using nested if else.
 
#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	
	printf("Enter value A :");
	scanf("%d",&a);
	
	printf("Enter value B :");
	scanf("%d",&b);
	
	printf("Enter value C :");
	scanf("%d",&c);
	
	printf("Enter value D :");
	scanf("%d",&d);
	
	printf("Enter value E :");
	scanf("%d",&e);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("A is Maximum !");
				}
				else
				{
					printf("E is Maximum !");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is Maximum !");
				}
				else
				{
					printf("E is Maximum !");
				}
			}
		}
		else
		{
			if(c>d)
			{ 
			  if(c>e)
			  {
			  	printf("C is Maximum !");
			  }
			  else
			  {
			  	printf("E is Maximum !");
			  }
			}
			else
			{ 
				if(d>e)
				{ 
					printf("D is Maximum !");
				}
				else
				{
					printf("E is Maximum !");
				}
			}	
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("B is Maximum !");
				}
				else
				{
					printf("E is Maximum !");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is Maximum !");	
				}
				else
				{
					 printf("E is Maximum !");
				}	
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is Maximum !");
				}
				else
				{
					printf("E is Maximum !");
				}
			}
			else
			{
				if(d>e)
				{
					printf("D is Maximum !");	
				}	
				else
				{
					printf("E is maximum !");
				}
			}	
		}
	}
}
