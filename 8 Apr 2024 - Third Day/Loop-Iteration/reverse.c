#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit,div,sum,multi;
	printf("Enter the number::");
	scanf("%d",&num);
	while(num>0)
	{
		digit=(int)log10(num)+1;
		div=div%10;
		multi=div*pow(10,digit);
		sum=sum+multi;
		num=num/10;
	}
	printf("Ans is %d",sum);
}
