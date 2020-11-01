#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int gcd(int ,int );
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,m,i,j,c1,c2,num,den,hcf;
        c1=c2=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&m);
    if(n%2!=0)
        c1=(n/2+1);
    else
        c1=n/2;
    c2=m/2;
        if(c2!=0)
    num=(c1*c2)+((n-c1)*(m-c2));
        else
            num=0;
    den=n*m;
    hcf=gcd(num,den);
    printf("%d/%d",(num/hcf),(den/hcf));
    }
    return 0;
}
int gcd(int a,int b)
{
    if(a>=b&&a%b==0)
    return b;
    else if(b>a&&b%a==0)
    return gcd(b,a);
    else
    return gcd(b,a%b);
}

