//WAP TO CHECK USER IS ELIGIBLE FOR VOTE OR NOT.

#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	printf("Enter your Age :");
	scanf("%d",&age);
	
	if(age>100)
	{
		printf("Enter valid age !");
	}
	else if(age>18)
	{
		printf("Your Eligible to vote !");
	}
	else if(age<0)
	{
		printf("Enter valid age:");
	}
	else
	{
		printf("Your Not Eligible to vote !");
	}
}
