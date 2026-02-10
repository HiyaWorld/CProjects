// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int horses;
    
    printf("enter a number: ");
    scanf("%d", &horses);
    if (horses%2 == 1)
        printf("this is an odd number\n");
    else
        printf("this is an even number\n");

    return 0;
}
