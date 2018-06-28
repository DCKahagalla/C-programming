#include <stdio.h>
void main()
{
	char input;
	printf("Character to convert: ");
	scanf("%c",&input);
	printf("Converted character:%c\n",input ^ 32);
}
