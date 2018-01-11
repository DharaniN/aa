#include<stdio.h>
void main()
{
        int n, i, c=0;
        printf("Enter the value:")
		scanf("%d",&n);
        for(i=2; i<n; i++)
        {
            if(n%i == 0)
            {
                c++;
                break;
            }
        }
        if(c == 0)
        {
            printf("This is a Prime Number");
        }
        else
        {
            printf("This is not a Prime Number");
        }
    }
}
