/*
    mario.c
   
    Author: Prateek Gaurav, prateekgaurav23@gmail.com
    
    This file is a solution of the mario problem from pset1 of CS50X by HarvardX on edX.
*/
#include<stdio.h>
#include<cs50.h>

int main(void)
{
 int n,i,j,k;
 do
 {
     printf("Enter the height of the pyramid:");
     n=GetInt();
 }
 while(n<0||n>23);
 for(i=0; i<n; i++)
 {
    for(j=(n-2); j>=i; j--)
    {
        printf(" ");
        
        
    }
    for(k=-2; k<i; k++)
    {
       printf("#");
    }
   
    printf("\n");
 }
}
