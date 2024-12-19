#include <stdio.h>
int main()
{ int n;
int i,j,k,l=1;
scanf("%d",&n);
for(i=1;i<=150/5;i++)
{
for(j=1;j<=(150-5*i)/2;j++)
{
    for(k=1;k<=(150-5*i-2*j);k++)
    {
        if(i*5+j*2+k==150&&i+j+k==100&&l<=n)
        {
            printf("%d %d %d\n",i,j,k);
            l++;
        }
    }
}
}
return 0;
}