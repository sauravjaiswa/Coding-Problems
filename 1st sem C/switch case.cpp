//switch case
#include<stdio.h>
int main()
{
	start://label
	int input,a,b;
	printf("\nEnter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter:\n 1 for add \n 2 for subtract \n 3 for multiply");
	scanf("%d",&input);
	switch(input)
	{
		case 1:
			printf("%d+%d=%d",a,b,(a+b));
			break;
			case 2:
			printf("%d-%d=%d",a,b,(a-b));
			break;
			case 3:
			printf("%d*%d=%d",a,b,(a*b));
			break;
			default:
				printf("Enter a correct input");
				goto start;
			}
	}
	/*age operators*/
