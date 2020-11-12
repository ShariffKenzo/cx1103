#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
   int number, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("numDigits1(): %d\n", numDigits1(number));
   numDigits2(number, &result);
   printf("numDigits2(): %d\n", result);
   return 0;
}
int numDigits1(int num)
{
   /* Write your program code here */
   int counter=0;
   while(num!=0){
       counter++;
       num/=10;
   }




   return counter;
}
void numDigits2(int num, int *result)
{
   /* Write your program code here */

   while(num!=0){
       *result+=1;
       num/=10;
   }



}
