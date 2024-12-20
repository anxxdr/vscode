//7-3 编程打印空心字符菱形 (15 分)
#include<stdio.h>
int main()
{
	int n,i,j,m;
	char c;
	scanf("%c %d", &c, &n);
	m = n/2;
	//先输出菱形的上部分 
	for (i=1; i<=m+1; i++) {
		for (j=0; j<m+1-i; j++) {		//每一行先输出字符前的空格 
			printf(" ");
		}
		for (j=0; j<=i*2-2; j++) {
			if ( j==0||j==i*2-2 ) {		//利用选择输出每行字符之间的空格 
				printf("%c", c);
			} else {
				printf(" ");
			}
		}
		c ++;							//控制字符变化 
		printf("\n");
	}
	c--;								//使字符为中间内行的字符 
	//再输出菱形的下部分 
	for (i=m; i>=1; i--) {				//与上部分思路相同 
		for (j=0; j<m+1-i; j++) {
			printf(" ");
		}
		c --;
		for (j=0; j<=i*2-2; j++) {
			if ( j==0||j==i*2-2 ) {
				printf("%c", c);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}