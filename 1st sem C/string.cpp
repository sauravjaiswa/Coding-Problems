#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	char s[]="h";
	char s2[20],s3[20],s4[20];
    scanf("%s",s2);               //scanning a string before any space
	scanf("%s",s3);               //scanning a string following the previous one before any space   
	printf("%s",s2);             //printing a string before any space
	printf("%s",s3);             //printing a string following the previous one before any space
	gets(s4);                    //scanning a whole string including spaces too
	printf("%s",s4);             //printing the whole string including spaces  
	puts(s4);                    //printing the whole string including spaces and then going to the next line
	int i;
	c=getchar();                 //taking a string characterwise
	printf("%c",c);
	i=0;
	while(c!='*')                //when a user gives '*' the scanning will stop but the string can be input
	{
		s4[i]=c;
		i++;
		c=getchar();
	}
	s4[i]='\0';
	puts(s4);
	c=getche();                   //taking the string characterwise
	i=0;
	while(c!='*')                 ////when a user gives '*' the scanning will stop and no further input is taken
	{
		s4[i]=c;
		i++;
		c=getche();
	}
	s4[i]='\0';
	puts(s4);
}
