#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the letter:::");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Vowels");
			break;
		default:
			printf("Constants");		
	}
}
