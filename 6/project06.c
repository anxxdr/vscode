#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
    char a[10],*b[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int n,i,j,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
        for(j=0;j<7;j++){
            if(!strcmp(a,b[j])){ 
                break;
            }
        }
        if(j>=7){
            printf("-1\n");
        }
        else{
        	printf("%d\n",j+1);
		} 
    }
    system("pause");
    return 0;
}
