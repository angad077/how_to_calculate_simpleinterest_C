#include <stdio.h>

int main()
{
    // MAKE PROGRAME TO CALCULATE SIMPLEINTEREST
    // WE KNOW THAT THE FORMULA OF SIMPLEINTEREST IS (principal*rate*year)/100;
    // SO I PUT (principal*rate*year)/100; --> THIS FORMULA INTO MY PROGRAME
    // SIMOLEINTEREST IS (principal*rate*year)/100;
    int principal, rate, year;
    int simpleinterest;
    simpleinterest = (principal * rate * year) / 100;
    printf("what is your principal\n");
    scanf("%d", &principal);
    printf("what is your rate\n");
    scanf("%d", &rate);
    printf("what is your year\n");
    scanf("%d", &year);
    printf("your simpleinterest is %d\n", principal * rate * year / 100);
    return 0;
}