#include <stdio.h>
void main()
{
	int a;
	printf("\t\tMenu");
	printf("\n...............................");
	printf("\n1-Microaoft Word");
	printf("\n2-Yahoo messenger");
	printf("\n3-AutoCAD");
	printf("\n4-Java Games");
	printf("\n...............................");
	printf("\nEnter number of your preference: ");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("Personal Computer Software\n");
			break;
		case 2:
			printf("Web based Software\n");
			break;
		case 3:
			printf("Scientific Software\n");
			break;
		case 4:
			printf("Embedded Software\n");
			break;
		default:
			printf("Incorrect Input\n");
	}

	
}
