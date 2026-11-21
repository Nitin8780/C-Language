//WAP to Simple interest.

#include<stdio.h>
#include<conio.h>


int main()
{
	int P,R,T;
	int total;
	
	printf("Enter the P:");
	scanf("%d",&P);
	
	printf("Enter the R:");
	scanf("%d",&R);
	
	printf("Enter the T:");
	scanf("%d",&T);
	
	total= P * R * T / 100;	
	
	printf("%d Total interest:",total);
	
}
