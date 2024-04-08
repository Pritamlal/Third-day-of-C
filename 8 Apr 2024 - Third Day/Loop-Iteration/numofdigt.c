#include<stdio.h>
#include<math.h>

int main()
{
	int count;
	long long num;
	printf("Enter the number::");
	scanf("%d",&num);
	
	count=(num==0)?1:(log10(num)+1);
	printf("Count is %d",count);
}
