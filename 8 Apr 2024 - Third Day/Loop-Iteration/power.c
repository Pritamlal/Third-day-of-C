#include<stdio.h>
int main()
{
	int base,exponent,i,pow;
	printf("Enter the base::");
	scanf("%d",&base);
	printf("Enter the exponent::");
	scanf("%d",&exponent);
	for(i=1;i<=exponent;i++)
	{
		pow=pow*base;
	}
	printf("The power is %d",pow);
}
