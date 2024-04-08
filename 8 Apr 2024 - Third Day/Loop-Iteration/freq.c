#include<stdio.h>
#define BASE 10
int main()
{
	int num,lastdigit,freq[BASE],i;
	
	
	printf("Enter number::");
	scanf("%d",&num);
	for(i=0;i<BASE;i++)
	{
		freq[i]=0;
	}
	while(num!=0)
	{
		lastdigit=num%10;
		num=num/10;
		freq[lastdigit]++;
	}
	printf("\nFrequeny of the number %d is::",num);
	for(i=0;i<BASE;i++)
	{
		printf("\nFrequency of %d=%d",i,freq[i]);
	}
	return 0;
}
