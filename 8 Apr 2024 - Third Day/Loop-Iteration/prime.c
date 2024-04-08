#include<stdio.h>
int main()
{
	int num,i,isprime=1;
	printf("Enter the num");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
		isprime=0;
		break;
	    }
	}
	
	if(isprime){
		printf("It is Prime Number",num);}
		else{
		printf("It is not Prime Number",num);
	}
	
}
