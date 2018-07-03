#include <stdio.h>
void main()
{
float amount,final_amount,discount;
printf("Enter amount: ");
scanf("%f",&amount);
if (amount>=1000)
{
	discount=amount*0.5;
	final_amount=amount-discount;
	printf("Discount:%0.2f",discount);
	printf("\nTotal:%0.2f\n",final_amount);

}
if (amount<1000)
	printf("NO discount....\n");

}
