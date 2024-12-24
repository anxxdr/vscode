#include<stdio.h> 
int main()
{
    char a[100];
    int i = 0, j;
    printf("????????????????????????");
    while ((a[i] = getchar()) != '\n')
    {
        i++;
    }
    a[i] = '\0'; 
    for (j = i - 1; j >= 0; j--)
        printf("%c ", a[j]);
    return 0;
}