#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the num1 and num2::");
	scanf("%d %d",&num1,&num2);
	switch(num1>num2)
	{
		case 0:
			printf("%d is max",num2);
			break;
		
		case 1:
			printf("%d is max",num1);
			break;	
	}
}
