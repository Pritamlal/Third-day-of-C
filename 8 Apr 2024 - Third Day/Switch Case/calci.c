#include<stdio.h>
int main()
{
	int num1,op,num2;
	printf("Enter the number::");
	scanf("%d %c %d",&num1,&op,&num2);
	switch(op)
	{
		case '+':
			printf("Add:%d",num1+num2);
			break;
		case '-':
			printf("Sub:%d",num1-num2);
			break;
		case '*':
			printf("Multiply:%d",num1*num2);
			break;
		case '/':
			printf("Division:%d",num1/num2);
			break;
		default:
			printf("Error");				
	}
}
