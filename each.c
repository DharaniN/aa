#include <stdio.h>
void main() 
{
	int a,i;
	printf("Enter  value:\t");
	scanf("%d\n",&a);
	for(i=0;i<a;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("%d\t%d\n",a[i],i);
	}

}
