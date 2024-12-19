#include<stdio.h>
int main()
{
	int i,j,k;
	int wu,er,san;
	int n;
	int t=1;
	scanf("%d",&n);
	for(i=1;i<=150/5;i++)	
	{
		for(j=1;j<=150/2;j++)
		{
			for(k=1;k<=100;k++)
			{
				if(i*5+j*2+k==150 && i+j+k==100 && t<=n)	
				{
					printf("%d %d %d\n",i,j,k);
					t++;	
				}
			}
		}
	}
}
