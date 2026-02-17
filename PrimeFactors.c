#include <stdio.h>

int isPrime(int input);

int main() 
{
    printf("Please enter a number:");
    int Alesha;
    scanf("%d",&Alesha);
    if (Alesha <= 0)
    {
        printf("Invalid number was entered.");
        return 0;
    }

    
    int Nilesh = 2;
    while ( Nilesh <= Alesha  ) 
    {
        if (Alesha%Nilesh==0)
        {
           //printf("One of the factors your number is %d\n", Nilesh);
           if(isPrime(Nilesh))
           printf("One of the prime factors of your number is %d\n",Nilesh);
        }  
   Nilesh = Nilesh + 1;
    }
}

int isPrime(int input)
{
int horses = 2;

    while (input>horses)
    {
        if (input%horses == 0)
            {
                return 0;
            }
            
        horses = horses + 1;
    }
     if 
        ((horses == input) || (input == 2) || input == 3)
        return 1;
}
