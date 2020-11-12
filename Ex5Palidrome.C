#include <stdio.h>
#include <string.h>

#define INIT_VALUE -1
int palindrome(char *str);
int main()
{
   char str[80];
   int result = INIT_VALUE;

   printf("Enter a string: \n");
   gets(str);
   result = palindrome(str);
   if (result == 1)
      printf("palindrome(): A palindrome\n");
   else if (result == 0)
      printf("palindrome(): Not a palindrome\n");
   else
      printf("An error\n");
   return 0;
}
int palindrome(char *str)
{
   /* Write your code here */
   int len;
   int i=0;
   len=strlen(str);

   if (len%2==1){
       while (i<(len-1)/2){
             if(*(str+i)!=*(str+len-1-i)){

                 return 0;

       }
       i++;

   }

   return 1;

   }

    if(len%2==0){

   while (i<len/2){
       if(*(str+i)!=*(str+len-1-i)){

           return 0;
       }
       i++;




   }
   return 1;
   }

}
