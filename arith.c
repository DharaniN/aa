#include<stdio.h>
int main()
{
      int num,i;
      int s=0;
      printf("Enter Value : ");
      scanf("%d",&num);
      s= (num* (num + 1)) / 2;
      for(i =1;i <= num;i++)
      {
            if (i!=num)
                  printf("%d + ",i);
            else
                  printf("%d ",i);
      }
      printf("Sum",s);
      }
