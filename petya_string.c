/*This program is to input 2 stroings and to find whether the two are equal and if they are so then we should print 0 or else we should print -1 or 1 according to the conditions given */

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    
    //Getting two strings from user
    gets(s1);
    gets(s2);
    int l=strlen(s1);
    for(int i=0;i<l;i++)
    {
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }
    int c;
    
    //Comparing the two strings using string compare
    c=strcmp(s1,s2);
    printf("%d",c);
    return 0;
}
