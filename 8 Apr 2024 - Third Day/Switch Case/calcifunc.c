#include<stdio.h>

int add(int num1,int num2);
int sub(int num1,int num2);
int multiply(int num1,int num2);
int division(int num1,int num2);

int main()
{
	int num1,num2,result;
	char op;
	printf("Enter the num1 and num2::");
	scanf("%d %c %d",&num1,&op,&num2);
	
	switch(op)
	{
		case '+':
			result=add(num1,num2);
			break;
		case '-':
			result=sub(num1,num2);
			break;
		case '*':
			result=multiply(num1,num2);
			break;
		case '/':
			result=division(num1,num2);
			break;		
		default:
			printf("Error");		
	}
	
	printf("%d %c %d = %d",num1,op,num2,result);
}

int add(int num1,int num2)
{
	return num1+num2;
}
int sub(int num1,int num2)
{
	return num1-num2;
}
int multiply(int num1,int num2)
{
	return num1*num2;
}
int division(int num1,int num2)
{
	return num1*num2;
}
