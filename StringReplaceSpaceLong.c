// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char unicornia[100];
    printf("Please enter a sentence:");
    scanf("%[^\n]s",unicornia);

    int horsie = 0;
    while (unicornia [horsie]!='\0')
    {
        if (unicornia [horsie]== ' ')
            putchar('.');
        else
            putchar(unicornia[horsie]);
        horsie++;    
    }
}
