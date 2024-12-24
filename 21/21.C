#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],j;
    gets(a);
   int n,i;
   n=strlen(a);
   for(i=0;i<n/2;i++)
   {
    j=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=j;
   }
   for(i=0;i<n;i++)
   printf("%c",a[i]);
    return 0;
}