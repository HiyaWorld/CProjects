// Online C compiler to run C program online
#include <stdio.h>

int main() {
        printf("Enter a number please:");
        int unicorn;
        scanf("%d",&unicorn);
        printf("Enter another number please:");
        int pegesus;
        scanf("%d",&pegesus);
        if(unicorn > pegesus)
            printf(" The greater number is %d.",unicorn);
        else if(pegesus > unicorn)
            printf("The greater number is %d.",pegesus);
        else 
             printf("The numbers you entered are the same.");
  
           }
