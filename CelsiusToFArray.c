// Online C compiler to run C program online
#include <stdio.h>

float convertctof(float);

int main() {
    float celsius[5];
    float faren; 
    for(int i = 0; i <5; i = i + 1)
    {
    printf("Enter value in celsius number %d:", i+1);
    scanf("%f",&celsius[i]);
    }
    putchar('\n');
    for(int i = 0; i <5; i = i + 1)
    {
        faren = convertctof(celsius[i]);
        printf("The value in celsius is %f and in fah is %f\n",celsius[i], faren);
    }
    
}


float convertctof(float horses)
{
return (horses * 1.8 ) + 32;
}
