//Gross salary calculator

#include<stdio.h>
#include<conio.h>

int main()
{
	
	int BaseSalary,hra,da,ta;
	int GrossSalary;
	
	
	printf("Enter the base salary:");
	scanf("%d",&BaseSalary);
	
	printf("HRA:");
	scanf("%d",&hra);
	
	printf("DA:");
	scanf("%d",&da);
	
	printf("TA:");
	scanf("%d",&ta);
	
	GrossSalary= BaseSalary+(BaseSalary*hra/100)+(BaseSalary*da/100)+(BaseSalary*ta/100);
	
	printf("Gross salar:%d",GrossSalary);
}
