//Question 1
#include<stdio.h>
int main()
{
	int choice;
	float amt,bill,disc;
	printf("Enter the amount of order:");
	scanf("%f",&amt);
	start:
	printf("Enter the type of shop from where order is taken:");
	printf("1)Store");
	printf("2)Wholesalers");
	printf("3)Government Agencies");
	printf("4)Any other shop");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(amt<=5000.0)
				disc=0.05*amt;
			else
				disc=0.075*amt;
			break;
			case 2:
			if(amt<=10000.0)
				disc=0.075*amt;
			else
			disc=0.12*amt;
			break;
			case 3:
			disc=0.06*amt;
		    break;
		    case 4:
			disc=0.05*amt;
		    break;
		    default:
		    	printf("\nEnter a valid choice!");
		    	goto start;
	}
	bill=amt-disc;
	printf("\nThe bill of %dth type of shop with Rs %f discount is Rs %f.",choice,disc,bill);
}
