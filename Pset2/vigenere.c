/*
    vigenere.c
   
    Author: Prateek Gaurav, prateekgaurav23@gmail.com
    
    This file is a solution of the vigenere problem from pset2 of CS50X by HarvardX on edX.
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>     //to use the function strlen().
#include <ctype.h>      //to use is functions like islower() etc.
#include<stdlib.h>      //to use the function atoi(), though it is included in cs50 lib.

int main (int argc, string argv[])
{
    if (argc != 2)     //checks if the input by user is more than one, if it is more than 1 the program termiinates returning 1.
    {
        printf("\n");
        return 1;
    }
    else if(argv[1])
    {
       int a=strlen(argv[1]);
       for(int i=0; i<a; i++)
       {
          if(!isalpha(argv[1][i]))   //checks if the input by the user is a string.
          {
            printf("Please enter only alphabets.\n");
            return 1;
          }
       }
        string s = GetString();   //takes the string input from the user.
        
       
        
           int i = 0;
           int m = 0;
           int n = 0;
           int z = 0;      //this is the keyindex.
           string k = argv[1];
        
               for (i = 0, n = strlen(s); i < n; i++)
                   { 
                          if (isalpha(s[i]))
                            {
                                z = m % strlen(k);
                                   if (islower(s[i]))
                                      {
                                           if (islower(k[z]))    //converts the lower case alphabets into ciphers.
                                                 {
                                                       int a = ((s[i] - 97 + k[z] - 97) % 26) + 97;
                                                        printf("%c", a);
                                                  }
                
                                           else
                                                  {
                                                       int a = ((s[i] - 97 + k[z] - 65) % 26) + 97;
                                                       printf("%c", a);
                                                  }
                                      }
                                           if (isupper(s[i]))        //converts the upper case alphabets into ciphers.
                                                 {
                                                         if (islower(k[z]))
                                                            {
                                                                  int b = ((s[i] - 65 + k[z] - 97) % 26) + 65;
                                                                   printf("%c", b);
                                                             }
                                           else
                                               {
                                                    int b = ((s[i] - 65 + k[z] - 65) % 26) + 65;
                                                    printf("%c", b);
                                                }
                                       }
                                         m++;
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
       
}
