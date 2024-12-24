#include<stdio.h>
double js(double i);
double qs(double i);
int main()
{
double pi=1.0,i,n,j;
	n=1;
scanf("%le", &i);
do
{
	pi+=js(n) / qs(2*n+1)*1.0;
	n++;
} while (js(n-1) / qs(2*n+1-2)*1.0>i);
j=js(n) / qs(2*n+1)*1.0;
printf("PI = %.5lf",2*pi);
	return 0;
}
double js(double i) {
    double result = 1.0;
    for (int j = 1; j <= i; j++) {
        result *= j;
    }
    return result;
}
double qs(double i) {
    double result = 1.0;
    for (int j = 3; j <= i; j+=2) {
        result *= j;
    }
    return result;
}