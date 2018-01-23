#include<stdio.h>
#include<conio.h>
int main()
{
char a[100];
int i=0,1=0,e=1;
clrscr();
printf("Enter the string\n");
gets(e);
for(i=0;a[i]!='\0';i++)
{
if(a[i]<=9||a[i]>=9)
{
1=1+i;
}
}
printf("The number of numeric character are %d\n",1);
getch();
return=0;
}
