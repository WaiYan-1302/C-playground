#include<string.h>
#include<stdio.h>

char main(){

   char s0[] = "Power";
   char s1[] = "r";
   if(strstr(s0 , s1))
    printf("R is spotted");
   return(0);
}
