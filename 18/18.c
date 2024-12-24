#include<stdio.h>
#include<string.h>

int main() 
{
   int n,i,j;
   char a[100][100],c;
   scanf("%c %d",&c,&n);
for(int i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
  { if("a[i][j]!='\n'")
   scanf("%c",a[i][j]);
   else
break;}
}
for(int i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
   {if("a[i][j]!='\n'")
   printf("%c",a[i][j]);
   else
       {printf("\n");
        break;}}
 }
 return 0;
}