#include<stdio.h>
int main()
{
	int num,mul=1,lastd;
	printf("Enter the number::");
	scanf("%d",&num);
	while(num>0)
	{
		lastd=num%10;
		mul=mul*lastd;
		num=num/10;
	}
	printf("The product of numb:%d",mul);
}
