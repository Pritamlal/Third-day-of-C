#include<stdio.h>
int main()
{
	int week;
	printf("Enter the week");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Firday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("invalid");					
	}
	return 0;
}
