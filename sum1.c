#include <stdio.h>
void main()
{
    int n1, i, s= 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n1);
    for(i=1;i<= n1;++i)
    {
        s += i;  
    }
    printf("Sum :",s);
    }
