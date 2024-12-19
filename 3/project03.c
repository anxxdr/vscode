#include<stdio.h>
#include<math.h>
int main()
{
int a,b[8],c1=0,c2=0,d,i;
scanf("%d",&a);
for(i=0;i<8;i++)
 { b[i]=a%2;
  a=a/2;
 }
for(i=0;i<4;i++)
{
  c1+=b[i]*pow(2,i);
}
for(i=4;i<8;i++)
{
  c2+=b[i]*pow(2,i-4);
}
d=c1+c2*10;
printf("%d",d);
  return 0;
}
