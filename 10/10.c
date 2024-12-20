#include<stdio.h>
int main()
{
    int a,b,c;
    int sum=0;
    scanf("%d/%d/%d",&a,&b,&c);
        switch(b-1)
        {
            case 12:sum+=31;
            case 11:sum+=30;
            case 10:sum+=31;
            case 9:sum+=30;
            case 8:sum+=31;
            case 7:sum+=31;
            case 6:sum+=30;
            case 5:sum+=31;
            case 4:sum+=30;
            case 3:sum+=31;
            case 2:
                if((a%4==0&&a%100!=0)||a%400==0)
                {
                    sum+=29;
                }
                else
                {
                    sum+=28;
                }
            case 1:sum+=31;
        }
    printf("%d",sum+c);
    return 0;
}