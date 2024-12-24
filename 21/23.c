#include <stdio.h> 
int main ()
{
    int n,a[1000],i=1,sum=0;
    scanf("%d",&n);
    while(n/10!=0)
      {
        a[i]=n%10;
        n=(n-n%10)/10;
        i++;
        }
    a[i]=n;
    for(n=1;n<=i;n++)
        sum+=a[n];
    printf("%d %d",i,sum);
    return 0;
}