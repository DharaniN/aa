#include <stdio.h>
void main()
{
  int i,c;
  char a[100];
  printf("Enter the character is %d\n");
  scanf("%s",&a);
  for(i=0 ; a[0]!="\0" ; i++)
    {
      if(a[i]=' ')
        {
          c++;
        }
    }
  printf("the words is %d",c);
}
