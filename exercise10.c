#include <stdio.h>
void main()
{
int marks;
printf("Entermarks: ");
scanf("%d",&marks);
if(marks>=75)
	printf("Your grade is: A\n");
else if(marks>=50&&marks<75)
	printf("Your grade is: B\n");
else if(marks>=25&&marks<50)
	printf("Your grade is: C\n");
else
	printf("Your grade is: F\n");
}
