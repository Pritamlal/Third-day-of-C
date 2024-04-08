#include<stdio.h>
int main()
{
	long long num;
	int count;
	
	printf("Enter the number::");
	scanf("%d",&num);
	
	do{
		count++;
		
		num/=10;
	}while(num!=0);
	
	printf("num of digit is %d",count);
}
