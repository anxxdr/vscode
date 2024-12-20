#include<stdio.h>//求一个数的π值
double js(double i);
double qs(double i);
int main()
{
double pi=1.0,i,n;
	n=1;
scanf("%lf",&i);
do
{
	pi+=js(n) / qs(2*n+1)*1.0;
	n++;
} while (js(n) / qs(2*n+1)*1.0>i);
printf("%lf",2*pi);
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