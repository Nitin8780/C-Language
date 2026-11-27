  // wap to check number is even or odd using if else without using %. - ss
  
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	int total;
	
	total= num/2;
	
	if(total*2 == num)
	{
		printf("This Number is Even");
	}
	else
	{
		printf("This Number is Odd");
	}
}
