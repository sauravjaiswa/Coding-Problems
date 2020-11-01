/*pascal's triangle-
1
1       1
1       2       1
1       3       3       1
1       4       6       4       1
1       5       10      10      5       1
1       6       15      20      15      6       1  */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the size of pascals triangle:");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		a[i][0]=1;a[i][i]=1;
		for(j=1;j<i;j++)
		a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
		printf("%d",a[i][j]);
		printf("\t");
	}
		printf("\n");
	}
}
