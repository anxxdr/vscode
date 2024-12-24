#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
   int n,i,j=0;
   n=strlen(a);
   for(i=0;i<n;i++)
   {
    if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'&&a[i]>'A'&&a[i]<='Z')
    j++;
   }
   printf("%d",j);
    return 0;
}