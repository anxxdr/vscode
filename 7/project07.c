#include<stdio.h>
int main()
{
	int i,j,k;
	int wu,er,san;
	int n;
	int t=0;
	scanf("%d",&n);
	for(i=1;i<=150/5;i++)		//5分一个，150分就有30个 
	{
		for(j=1;j<=150/2;j++)	//2分一个，150分就有75个 
		{
			for(k=1;k<=100;k++)	//因为硬币不能多于100枚，所以1分的情况最多只有100个 
			{
				if(i*5+j*2+k==150 && i+j+k==100 && t<n)	//题目要求说输出n种可能的方案，所以输入到n种就可以了 
				{
					printf("%d %d %d\n",i,j,k);
					t++;	//每有一种方案就+1，最多n种 
				}
			}
		}
	}
}
