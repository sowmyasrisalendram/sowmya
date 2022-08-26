#include<stdio.h>

int main()
{
    char string[100];
    int length=0, flag=1,i;
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-1-i] )
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
