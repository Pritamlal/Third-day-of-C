#include<stdio.h>
#include<math.h>
int main()
{
	int n,firstd,lastd,digit;
	printf("Enter the number::");
	scanf("%d",&n);
	
	lastd=n%10;
	
	digit=(int)log10(n);
	
	firstd=(int)(n/pow(10,digit));
	printf("%d \n%d",lastd,firstd);
}
