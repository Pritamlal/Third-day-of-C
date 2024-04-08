#include<stdio.h>
int main()
{
	long long lastdigit,num;
	printf("enter the number::");
	scanf("%lld",&num);
	lastdigit=num%10;
	printf("%lld",lastdigit);
}
