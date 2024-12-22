#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	if(scanf("%d",&n)){};
	int h,w;
	const float m=0.1;
	for(int i=0;i<n;i++)
	{
		if(scanf("%d %d",&h,&w)){};
		float w1;
		w1=(h-100)*0.9*2;
		if(fabs(w-w1)<w1*m){
			printf("You are wan mei!\n");
		}else if(fabs(w-w1)>=w1*m&&(w>w1)){
			printf("You are tai pang le!\n");
		}else{
			printf("You are tai shou le!\n");
		}
	}
	return 0;
} 
