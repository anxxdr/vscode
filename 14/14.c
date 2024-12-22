#include<stdio.h>
int main()
{
    int n,h[100],w[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
        scanf("%d",&w[i]); 
    }
    for(i=0;i<n;i++)
    {
       if(w[i]>(h[i]-100)*0.9*0.9*2&&w[i]<(h[i]-100)*0.9*1.1*2)
        {
            printf("You are wan mei!\n");
        }
        if(w[i]>=(h[i]-100)*0.9*1.1*2)
        {
            printf("You are tai pang le!\n");
        }
         if(w[i]<=(h[i]-100)*0.9*0.9*2)
        {
            printf("You are tai shou le!\n");
        }
    }
    return 0;
}