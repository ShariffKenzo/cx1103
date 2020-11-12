#include <stdio.h>

int main(){

    int i;
    int n=2;
    int j=0;



    printf("enter an integer: \n");
    scanf("%d", &i);
    if(i<=1){

        printf("%d is not a prime number\n", i);

        return 0;
    }


    while(n!=i){

            if(i%n==0){

             // printf("%d\n", n);
                j++;

            }

            n++;

    }




   if(j==0){

        printf("%d is a prime number\n", i);

    }
    else{
        printf("%d is not a prime number\n", i);

    }

    return 0;


}
