// Online C compiler to run C program online
#include <stdio.h>

float convertctof(float);

int main() {
    // Write C code here
    float celsius;
    float fahren;
    printf("Enter value in celsius:");
    scanf("%f",&celsius);
    printf("The value you entered in celsius was %f\n", celsius);
    
    fahren = convertctof(celsius);
    
    printf("The value in farenhite was %f\n", fahren);
}
float convertctof(float horses)
{
return (horses * 1.8 ) + 32;
}
