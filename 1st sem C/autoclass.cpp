//Auto class
#include<stdio.h>
void fun();
int main()
{
	auto int a=30;
	fun();
	printf("\na=%d",a);
}
void fun()
{
	auto int a=20;
	printf("\na=%d",a);
	a+=10;
	printf("\na=%d",a);
}
