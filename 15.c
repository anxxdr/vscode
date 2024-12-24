#include<stdio.h>
#include<math.h>
int main(){	
	int l,n,t;
	scanf("%d%d",&l,&n);
	int xx[l],i;
	t = pow(26,l)-n; 
	for(i=0;i<l;i++){
		xx[i]=t%26;
		t/=26;
	}
	for(i=l-1;i>=0;i--)
		printf("%c",'a'+xx[i]);
}