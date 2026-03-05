/*Program of a scientific calculator*/
#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, result;
    int operator;
 
    printf("Use the following numbers to carry out your desired operation \n\n 1. Addition (+) \n 2. Subtraction (-) \n 3. Multiplication (*) \n 4. Division (/) \n 5. Sine (sin) \n 6. Cosine (cos) \n 7. Tangent (tan) \n 8. Logarithm (log) \n 9. Exponential (exp) \n 10. Square Root (sqrt)\n\n");
    printf("Enter an operand: \n");
    scanf("%f", &num1);

    printf("Enter operator (Choose numbers 1-10 that corespond your desired operation):\n");
    scanf(" %d",&operator);

    if(operator >= 1 && operator <= 4) 
    {   printf("Enter second operand: \n");
        scanf("%f", &num2);
    }

    switch(operator)      
    {    case 1:
            result =num1 + num2;
            break; 
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
            break;
        case 5:
            result = sin(num1);
            break;
        case 6:
            result = cos(num1);
            break;
        case 7:
            result = tan(num1);
            break;
        case 8:
            result = log(num1);
            break;
        case 9:
            result = exp(num1);
            break;
        case 10:
            result = sqrt(num1);
            break;
        default:
            printf("Error! Operator is not correct");
            return 1;
    }

    printf("Result: %.2f", result);
    return 0;
}