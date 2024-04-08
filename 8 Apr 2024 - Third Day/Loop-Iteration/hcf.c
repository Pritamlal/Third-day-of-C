#include<stdio.h>
int main()
{
	int i,hcf=1,min,num1,num2;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	//to find min number
	min=(num1<num2)?num1:num2;
	for(i=1;i<=min;i++)
	{
		if(num1%i==0 && num2%i==0){
		hcf=i;
		}
	}
	printf("This is ur HCF:%d",hcf);
}
