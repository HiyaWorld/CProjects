// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char unicorn[20];
    int horse = 0;
    printf("Enter your name: ");
    scanf("%[^\n]s", unicorn);
    
    int length = strlen(unicorn);
    while (horse < (length / 2))
    {
     if (unicorn[horse] == unicorn[length-horse-1])
        horse++;
     else 
        {
            printf("Your name is not a palindrome.");     
            return 0;
        }
     }
  printf("Your name is a palindrome.");  
}
