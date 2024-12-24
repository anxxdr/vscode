#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],j;
    gets(a);
   int n,i;
   n=strlen(a);
   for(i=0;i<n;i++)
   {
    if(a[i]>='A'&&a[i]<='Z')
      a[i]=65+(90-a[i]);
   }
   for(i=0;i<n;i++)
   printf("%c",a[i]);
    return 0;
}