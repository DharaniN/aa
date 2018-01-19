    #include<stdio.h>
    void main()
    {
    	char a,la,ua;
    	printf("Enter the alphabets");
    	scanf("%c",&a);
    	la=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    	ua=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
    	if(la||ua)
    	{
    		printf("vowels");
    	}
    	else
    	{
    		printf("consonant");
    	}
     
    }
