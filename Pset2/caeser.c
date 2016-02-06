/*
    caesar.c
   
    Author: Prateek Gaurav, prateekgaurav23@gmail.com
    
    This file is a solution of the caesar problem from pset2 of CS50X by HarvardX on edX.
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>     //to use the function strlen().
#include <ctype.h>      //to use is functions like islower() etc.
#include<stdlib.h>      //to use the function atoi(), though it is included in cs50 lib.

int main (int argc, string argv[])
{
    if (argc != 2)     //checks if the input by user is more than one.
    {
        printf("\n");
        return 1;
    }
    else
    {
        string s = GetString();   //takes the string input from the user.
        
        int i = 0;
        int n = 0;
        int k = atoi(argv[1]);    //converting the string to integer.
        
        for (i = 0, n = strlen(s); i < n; i++)
        {
            if (isalpha(s[i]))    //checks if the character is an alphabet.
            {
                
                if (isupper(s[i]))   //checks if the character is in upper case.
                {
                    int b = (((s[i] - 65 + k) % 26) + 65);
                    printf("%c", b);
                }
                
                if (islower(s[i]))  //checks if the character is in lower case.
                {
                    int a = (((s[i] - 97 + k) % 26) + 97);
                    printf("%c", a);
                }
            }
            else
            {
                printf("%c", s[i]);  //prints the ciphered text.
            }
        }
        printf("\n");
    }
}
