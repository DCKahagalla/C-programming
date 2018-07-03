#include <stdio.h>
void main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if (marks>=50)
		printf("You have Passed the exam!\n");
	else 
		printf("You haven't passed the exam!\n");
}
