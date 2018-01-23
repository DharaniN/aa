#include <stdio.h>
#include<string.h>
void main()
{
    char   str[1000];
    int coSpChar;
    int count;
    coSpChar=0;
    gets(string);
    if(strlen(string)<=1000){
 
    for(count=0;string[count]!=NULL;count++)
    {
 
        if(string[count]>='0' && string[count]<='9')
            {  }
        else if((string[count]>='A' && string[count]<='Z')||(string[count]>='a' && string[count]<='z'))
            { }
        else if(string[count]==' ')
            { }
        else
            coSpChar++;
    }
 
    printf("%d",coSpChar);
    
    }
}
