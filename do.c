#include <stdio.h>

void main(void) {
	int i,j,t;
	for(i=0;i<n;i++)
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			 }
			}
		}
	}
	printf("%d\t",a[n%2]);

}
