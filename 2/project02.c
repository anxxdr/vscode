#include<stdio.h>
int main()
{
  int a1,b1,a2,b2,i,p,c2,c1;
  scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
  c1=a1 * b2+a2 * b1;
  c2=b1*b2;
  if(c1<c2) p=c1;
  else p=c2;
  if(p<0) p=-p;
  for(i=p;i>=1;i--)
  {
    if(c1%i==0&&c2%i==0)
    {
      c1=c1/i;
      c2=c2/i;
      break;
    }
  }
  if(c1%c2==0) printf("%d",c1/c2);
  else if(c1%c2!=0&&c2!=0) printf("%d/%d",c1,c2);
  return 0;
}
