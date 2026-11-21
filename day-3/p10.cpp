//wap to second to hh:mm:ss

// Faild program

#include<stdio.h>
#include<conio.h>

int main()
{
	
	int hh,mm,ss,seconds;
	
	printf("ENTER SECOND TO CONVERTS HH:");
	scanf("%d",&hh);
	
	printf("ENTER SECOND TO CONVERTS SS:");
	scanf("%d",&ss);
	
	printf("ENTER SECOND TO CONVERTS MM:");
	scanf("%d",&mm);
	
	seconds=hh / 3600, mm / 3600 ;
	printf("%d TOTAL HH:SS:MM=",seconds);
	
}
