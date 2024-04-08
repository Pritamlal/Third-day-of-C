#include<stdio.h>
int main()
{
	int start,end,i,sum=0;
	printf("Enter the start::");
	scanf("%d",&start);
	printf("Enter the end::");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	printf("The sum is %d",sum);
}
