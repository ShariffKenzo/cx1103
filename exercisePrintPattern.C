#include <stdio.h>
int main()
{
   int row, col, height;
   int num = 0;
   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("Pattern: \n");

   /* Write your program code here */
   int i,n,j=0;

   //while(j<height){
       for(row=1;row<=height;row++){
           if(n==0){
            i=0;
           while(i<row){
               printf("1");
               i++;

           }  printf("\n");
               printf("\n");

           }


           if(n==1){
            i=0;
           while(i<row){
               printf("2");
               i++;
           }
             printf("\n");
               printf("\n");
           }


           if(n==2){
            i=0;
           while(i<row){
               printf("3");
               i++;

           }

             printf("\n");
               printf("\n");
           }


           n++;

           if(n==3){
               n=0;

           }

       }


 //  }

   return 0;
}
