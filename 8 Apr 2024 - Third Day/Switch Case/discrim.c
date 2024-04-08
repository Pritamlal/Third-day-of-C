#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,disc,root1,root2,imaginary;
	printf("Enter hte value of abc::");
	scanf("%f %f %f",&a,&b,&c);
	
	disc = (b*b)-(4*a*c);
	
	switch(disc>0)
	{
		case 1:
			root1 = (-b+sqrt(disc))/2*a;
			root2 = (-b-sqrt(disc))/2*a;
			printf("Root are %d and %d",root1,root2);
			break;
		
		case 0:
			switch(disc<0)
			{
				case 1:
					root1 = root2 = -b/2*a;
					imaginary = sqrt(-disc)/2*a;
					
					printf("Answers are %d %d %d %d",root1,imaginary,root2,imaginary);
					break;
				
				case 0:
					root1 = root2 = -b/2*a;
					printf("Root are %d %d",root1,root2);
					break;
			}
			 
	}
}
