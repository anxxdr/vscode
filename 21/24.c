#include<stdio.h>
int main()
{
    char a[100][100];
    int n,i,j;
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n-i;j++)
    {
        if(i==0&&j==0)
        {a[i][j]='A';
        printf("%c ",a[i][j]);}
        else if(i!=0&&j==0)
        {a[i][j]=a[i-1][n-i]+1;
        printf("\n%c ",a[i][j]);}
        else
        {a[i][j]=a[i][j-1]+1;
        printf("%c ",a[i][j]);}
    }
}
    return 0;
}