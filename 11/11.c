#include<stdio.h>//�����������
int main()
{
	int  a[100];
	int i = 0, j;
	int end = 0;
	while (end != '\n')
	{
		scanf_s("%d", &a[i]);
		i++;
		end = getchar();
	}
	printf("��ʼ˳���ǣ�");
	for (j = 0; j <= i-1; j++)
		printf("%d ", a[j]);
	printf("\n������˳���ǣ�");
	for (j=i-1; j>=0; j--)
		printf("%d ", a[j]);
	return 0;
}