#include <stdio.h>
//打印菱形
int main() {
     char a;
     int b,i,j,k;
     scanf("%c %d",&a,&b);
for(i=1;i<=b/2+1;i++)
{
    for(j=1;j<=b/2-i+1;j++)
    {
        printf(" ");
    }
    if(i==1)
    printf("%c",a);
    else
    {
        printf("%c",a);
        for(k=1;k<=2*(i-1)-1;k++)
        {
            printf(" ");
        }   
         printf("%c",a);
    }
     for(j=1;j<=b/2-i+1;j++)
    {
        printf(" ");
    }
    printf("\n");
    a++;
    }
    a=a-2;
    for(i=b/2;i>=1;i--)
{
    for(j=1;j<=b/2-i+1;j++)
    {
        printf(" ");
    }
    if(i==1)
    printf("%c",a);
    else
    {
        printf("%c",a);
        for(k=1;k<=2*(i-1)-1;k++)
        {
            printf(" ");
        }   
         printf("%c",a);
    }
     for(j=1;j<=b/2-i+1;j++)
    {
        printf(" ");
    }
    printf("\n");
    a--;
    }
    return 0;
}