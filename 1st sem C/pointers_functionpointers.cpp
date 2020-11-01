//pointers_functionpointers
/*4199813
  10
  20 */
#include<stdio.h>
void print(int);
void (*pprint)(int);           //This is a pointer function
main()
{
	printf("%d\n",print);
	pprint=print;                     //Copying the memory address of print() in pprint()
	(*pprint)(10);
	pprint(20);
}
void print(int n)
{
	printf("%d\n",n);
}
