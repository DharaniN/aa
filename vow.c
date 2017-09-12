#include<stdio.h>
void main()
{
char a1;
int ucv,lcv;
printf("enter the word");
scanf("%c",&a1);
ucv=(a1=='a'||a1=='e'||a1=='i'||a1=='o'||a1=='u');
lcv=(a1=='a'||a1=='e'||a1=='i'||a1=='o'||a1=='u');
if(lcv||ucv)
printf("%c",vowel);
else
printf("%c",cosonant);
return 0;
}
