//WAP to find a the answer given formula (x+y+z)3.

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
	
	total=(x*x*x)+(y*y*y)+(z*z*z)+3*(x+y)*(y+z)*(z+x);
		
	printf("ANSWER IS : %d",total);
	
	
}
