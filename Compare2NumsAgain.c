#include <stdio.h>

int main() 
{
    printf ("Please enter a number:");
    int unicorns;
    scanf ("%d", &unicorns);
    printf (" Please enter another number:");
    int horse;
    scanf("%d",&horse);
    if (unicorns > horse)
        printf ("The greater number is %d!",unicorns);
    else if ( horse > unicorns)
        printf ("The greater number is %d!",horse);
    else 
        printf ("The numbers you entered are the same!");
}
