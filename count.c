#include<stdio.h>
void main()
{
int n,digit;
printf("Enter the value");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
digit++;
}
printf("Digits are",digit);
}
