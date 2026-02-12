#include <stdio.h>

int main() 
{
    int unicorns, horse, pegasus;
    
    printf ("Please enter a number:");
    scanf ("%d", &unicorns);
    printf (" Please enter another number:");
    scanf("%d",&horse);
    printf (" Please enter one more number:");
    scanf("%d",&pegasus);
    
    if (unicorns > horse)
    { 
        if (unicorns > pegasus)
            printf (" The greatest number is %d",unicorns);
        else 
            printf (" The greatest number is %d",pegasus);
    }
    else 
    { 
        if ( horse > pegasus )
            printf (" The greatest number is %d",horse);
        else 
            printf (" The greatest number is %d",pegasus); 
    }
       
    
}
