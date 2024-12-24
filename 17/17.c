#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,a[100],a1=0,a2=0,i,j=0;
    double a3=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%3==0&&a[i]>a1)
       a1=a[i];
    }
    if(a1==0)
    {
        printf("NONE ");
    }
    else
    {
        printf("%d ",a1);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%3==1)
        a2++;
    }
    if(a2==0)
    {
        printf("NONE ");
    }
    else
    {
        printf("%d ",a2);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%3==2)
        {a3+=a[i];
        j++;}
    }
    if(a3==0)
    {
        printf("NONE");
    }
    else
    {
        printf("%.1lf",a3/j);
    }
    return 0;
}