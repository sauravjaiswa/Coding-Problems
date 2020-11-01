#include<stdio.h>
#include<conio.h>
#include<string.h>
int pos(int n,char *s1,char *s2);
int main()
{
	int n;
	char str1[20],str2[20];
	printf("Enter string 1:");
    gets(str1);
	printf("Enter string 2:");
    gets(str2);
    printf("Enter which occurence:");
    scanf("%d",n);
    int p=pos(n,str1,str2);
    printf("%d",p);
}
int pos(int n,char *s1,char *s2)
{
	int l1,l2,i,j,x,c=0,z=0;
	l1=strlen(s1);
	l2=strlen(s2);
	int k=0;
	j=l2-1;
	x=l2-1;
		for(i=j;i>=0;i--)
		{
		if(*(s2+x--)==*(s1+i))
		{
			c++;
			if(c==l2)
			{
				j=i;
				k++;
				if(k==n)
				{
					return(j+l2);
					break;
				}
			}
		}
		else
		{
			c=0;
			x=l2-1;
		}
		}
	return (j+l2);
}
