/*
    initials.c
   
    Author: Prateek Gaurav, prateekgaurav23@gmail.com
    
    This file is a solution of the initials problem from pset2 of CS50X by HarvardX on edX.
*/

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
   
   int i=0;
   //printf("Enter a string:");
   string s=GetString();
   printf("%c", toupper(*s));
   while(s[i]!='\0')
     {
        if(s[i]==' ')
         {
           i++;
            printf("%c", toupper(*(s+i)));
             
         }
         i++;
        
     }
     printf("\n");
     return 0;
   
}
