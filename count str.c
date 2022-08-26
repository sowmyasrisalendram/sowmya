#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int upper=0,lower=0,num=0;
    char ch[100];
    gets(ch);
    for(i=0; ch[i]!=0; i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
 		upper++;
		}
		else if(ch[i]>='a' && ch[i]<='z')
		{
    	lower++;
		}
		else if(ch[i]>='0'&& ch[i]<='9')
		{
			num++;
		}
    }
    printf("\nCount of uppercase letters: %d",upper);
    printf("\nCount of lowercase letters: %d",lower);  
	printf("\nCount of numbers: %d",num);
	getch();
    return 0;
}
