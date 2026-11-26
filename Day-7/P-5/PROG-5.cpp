 // wap to calculate grade based on percentage of 5 subjects of 100 marks.
 
 #include<stdio.h>
 
 int main()
 {
 	int hindi,math,science,english,gujrati;
 	
 	printf("-------------ENTER YOUR MARK AND CHECK YOUR GRADE------------------\n");
 	
 	printf("Enter your Hindi Marks : ");
 	scanf("%d",&hindi);
 	
 	printf("Enter your Math's Marks : ");
 	scanf("%d",&math);
 	
 	printf("Enter your Science Marks : ");
 	scanf("%d",&science);
 	
 	printf("Enter your English Marks : ");
 	scanf("%d",&english);
 	
 	printf("Enter your Gujrati Marks : ");
 	scanf("%d",&gujrati);
 	
 	float percentage;
 	
 	percentage=(hindi+math+science+english+gujrati)/5;
 	
 	printf("YOUR TOTAL PERCENTAGE %.2f\n",percentage);
 	
 	if(percentage>95 && percentage<100)
 	{
 		printf("YOUR GARDE IS A+");
	}
	else if(percentage>90 && percentage<95)
	{
		printf("YOUR GARDE IS A");
	}
	else if(percentage>80 && percentage<90)
	{
		printf("YOUR GARDE IS B+");
	}else if(percentage>70 && percentage<80)
	{
		printf("YOUR GARDE IS B");
	}else if(percentage>60 && percentage<70)
	{
		printf("YOUR GARDE IS C+");
	}else if(percentage>50 && percentage<60)
	{
		printf("YOUR GARDE IS C");
	}else if(percentage>40 && percentage<50)
	{
		printf("YOUR GARDE IS D");
	}
	else
	{
		printf("YOUR ARE FAILD !");
	}
 	
 	
 }
