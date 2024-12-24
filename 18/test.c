#include<stdio.h>
#include<string.h>
int main()
{
    int N,term=0;
    char ch;
    char str[N][N];
    scanf("%c %d",&ch,&N);
    getchar();
    for(int i=0;i<N;i++)
        gets(str[i]);
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(str[i][j]!=str[N-1-i][N-1-j])term=1;
    if(term==0)printf("bu yong dao le\n");
    for(int i=N-1;i>=0;i--){
        for(int j=N-1;j>=0;j--){
            if(str[i][j]==' ')printf(" ");
            if(str[i][j]=='@')printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}