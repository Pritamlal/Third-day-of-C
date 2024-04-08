#include<stdio.h>
int main()
{
	long long firstdigit,num;
	printf("Enter the number::");
	scanf("%d",&num);
	while(num>=10)
	{
		num=num/10;
	}
	printf("the first digit is : %d",num);
}
