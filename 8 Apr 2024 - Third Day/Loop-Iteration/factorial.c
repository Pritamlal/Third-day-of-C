#include<stdio.h>
int main()
{
	int fact=1,n,i;
	printf("Enter the number::");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("The fact is:%d",fact);
}
