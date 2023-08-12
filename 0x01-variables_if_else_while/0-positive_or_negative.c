#include <time.h>
#include <stdio.h>
/**
*main-Determine if a rendom number is positive , negativeorzero
*
*Return: 0 on succese
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%iis positive\n", n);
else if (n == 0)
printf("%i is zero\n", n);
else
printf("%i is negative\n", n);
return (0);
}
