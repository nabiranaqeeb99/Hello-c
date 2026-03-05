#include <stdio.h>

int main() 
{
    int n, i, factorial = 1;
    
    printf("Enter a number: \n");
    scanf("%d", &n);
    
    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else if (n == 0)
    {
        printf("Factorial of 0 is 1.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
     {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }
    
    return 0;
}