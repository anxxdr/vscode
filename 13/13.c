#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int slove(char*a)
{
int len=strlen(a);
int s=0;
for(int i=0;i<len;i++)
{
if(a[i]>='0'&&a[i]<='9')
s=s*10+a[i]-'0';
else return 1001;
}
return s;
}
int judge(char*a)
{
int len=strlen(a);
if(len>4)
return 0;
else if(a[0]=='-')
return 0;
else if(slove(a)>1000||slove(a)<1)
return 0;
else return 1;
}
int main()
{
char a[1000],b[1000];
scanf("%s",a);
getchar();
gets(b);
if(judge(a)&&judge(b))printf("%d + %d = %d",slove(a),slove(b),slove(a)+slove(b));
else if(judge(a))printf("%d + ? = ?",slove(a));
else if(judge(b))printf("? + %d = ?",slove(b));
else printf("? + ? = ?");
}