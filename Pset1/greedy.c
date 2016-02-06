/*
    greedy.c
    
    Author: Prateek Gaurav, prateekgaurav23@gmail.com
    
    This file is a solution of the greedy algorithm problem from
    pset1 of CS50X by HarvardX on edX.
*/

#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
  float num;
  int q=0;
  int d=0;
  int n=0;
  int p=0;
  int total;
  do
  {
  printf("Enetr the change to be returned in dollars:");
  num=GetFloat();
  }
  while(num<0);
  
  num = round(num*100);
  
  //printf("Amount in cents after conversion:%d cents\n", (int)num);
  if((num/25)>=1)
      {
           q = num/25;
           num = ((int)num%25);
           //printf("No. of quater coins:%d,\n", q);
           //printf("Amount remaining:%d\n", (int)num);
      }
      if((num/10)>=1)
          {
              d = num/10;
              num = ((int)num%10);
              //printf("No. of dime coins:%d\n", d);
              //printf("Amount remaining:%d\n", (int)num);
          }
          if((num/5)>=1)
              {
                  n = num/5;
                  num=((int)num%5);
                  //printf("No. of nickel coins:%d\n", n);
                  //printf("Amount remaining:%d\n", (int)num);
              }
              if((num/1)>=1)
                  {
                      p = num/1;
                      num = ((int)num%1);
                      //printf("No. of Penny coins:%d\n", p);
                      //printf("Amount remaining:%d", (int)num);
                  }
                  
                  total = q+d+n+p;
                  printf("%d\n", total);
}

