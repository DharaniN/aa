#include <stdio.h>
int main()
{
	int val[100],h,n,l,i;
	for(i=0;i<100;i++)
  {
		printf("%d",i+1);
		scanf("%d",&val[i]);
	}
	l=val[0];
	h=val[0];
	for(i=0;i<100;i++)
 {
		if(val[i]>h)
    {
			h=val[i];
    }
		else
    {
			if(val[i]<l)
				l=val[i];
		}
	}
	printf("\n Highest value is%d",h);
	printf("\n Lowest value is %d",l);
	return 0;
}
