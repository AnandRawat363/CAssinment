#include <stdio.h>
#include <math.h>
#include "helpinghand.h"


int main() 
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    if(isArmstrong(number)){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }

    return 0;
}