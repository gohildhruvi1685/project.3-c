#include<stdio.h>

main()
{
	int count=0,n;
	printf("Enter uour digit=");
	scanf("%d",&n);
	while(n!=0)
	{
	n=n/10;
	count++;
	}
	printf("number of digits=%d",count)	;
}
