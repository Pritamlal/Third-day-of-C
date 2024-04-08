#include<stdio.h>
int main()
{
	int lcm,num1,num2,i,max;
	printf("Enter the number::");
	scanf("%d %d",&num1,&num2);
	max=(num1>num2)?num1:num2;
	i=max;
	while(1)
	{
	if(i%num1==0 && i%num2==0)
	{
	lcm=i;
	break;
	}
	i+=max;
}
	printf("the lcm is %d",lcm);
}
