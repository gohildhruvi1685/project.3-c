#include<stdio.h>

main()
{
	int first,last,sum,num;
	
	printf("enter any number= ");
	scanf("%d",&num);
	
	last=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	first=num;
	sum=first+last;
	printf("the sum of a number's first and last digits=%d",sum);
}