#include<stdio.h>
#include<math.h>
int main()
{
    int num,p=1,rev=0,original,digit,sum=0,count=0;
    long fac=1;
    printf("\n--- Number Analysis ---\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n--- Analysis results ---\n");
    printf("The number is: %d\n", num);
    
    if (num %2 == 0) 
    {
        printf("Even/Odd: Even\n");
    } 
    else 
    {
        printf("Even/Odd: Odd\n");
    } 
    if(num <= 1)
    {
        printf("Prime/Composite: Neither\n");
    }
    if(num > 1)
    {
        for(int i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                p=0;;
                break;
            }
        }
        if (p==1)
        {
            printf("Prime/Composite: Prime\n");
        }
        else
        {
            printf("Prime/Composite: Composite.\n");
        }
    }
    original = num;
    while(original != 0)
    {
        digit = original % 10;
        original = original / 10;
        rev = rev * 10 + digit;
    }
    printf("Reverse: %d\n", rev);

    if(rev==num)
    {
        printf("Palindrome: Yes\n");
    }
    else
    {
        printf("Palindrome: No \n");
    }

    original = num;
    while(original != 0)
    { 
        count++;
        original = original / 10;
    }
    printf("Number of digits: %d\n", count);
    original = num;
    while(original != 0)
    {
        digit = original % 10;
        original = original / 10;
        sum = sum + (int)pow(digit, count);
    }
    if(sum == num)
    {
        printf("Armstrong: Yes\n");
    }
    else
    {
        printf("Armstrong: No\n");
    }

    original = num;
    sum=0;
    while(original != 0)
    {
        digit = original % 10;
        original = original / 10;
        sum=sum + digit;
    }
    printf("Sum of digits: %d\n", sum);
    if (num > 20)
    {
        printf("Factorial: Too large\n");
    }
    else
    {
        for(int i=1; i<=num; i++)
        {
            fac = fac * i;
        }
         printf("Factorial: %ld\n", fac);
    }
    return 0;
}   