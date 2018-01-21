#include<stdio.h>
void main()
{
char a[100];
int i,line ;
scanf("%s",&a);
for(i=0;i<=2;i++)
{
if(a[i]=='')
{
line++;
}
}
printf("%d\n,line+1);
}
