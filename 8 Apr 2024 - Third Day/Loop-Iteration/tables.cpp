#include<stdio.h>
int main()
{
	int n,i,res;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the i value:");
	scanf("%d",&i);
	for(i=1;i<=20;i++)
	{
		res=n*i;
		printf("%d * %d = %d \n",n,i,res);
		
	}
}
