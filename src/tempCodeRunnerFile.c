/* Creation of a calculator, that will have these operations: addition, subtraction, multiplication, division,
 potentiation and square root extraction.*/

//inclusion of the libraries.
#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Creation of the variable that will storage the numbers and the type of the operation.
    float number1, number2;
    char operation;

    //Creation of the variable that will storage the result.
    float result;

    //Creation of the repetition.
    int repetition = 1;
    while (repetition = 1)
    {

        //Collection user-given information.
        printf("\n \nChose the first Number: ");
        scanf("%f", &number1);
        printf("Chose one operation(+, -, /, *, ^, r):  ");
        scanf(" %c", &operation);

        //Processing the information given by the user, and collection of more user-given information.
        if (operation == '+')
        {
            printf("Chose the second number:  ");
            scanf("%f", &number2);
            //Data output.
            printf("Result %.2f", result = number1 + number2);
            return 0;
        }

        if (operation == '-')
        {
            printf("Chose the second number::  ");
            scanf("%f", &number2);
            //Data output.
            printf("Result: %.2f", result = number1 - number2);
            return 0;
        }

        if (operation == '/')
        {
            printf("Chose the second number::  ");
            scanf("%f", &number2);
            //Data output.
            printf("Result: %.2f", result = number1 / number2);
            return 0;
        }

        if (operation == '*')
        {
            printf("Chose the second number::  ");
            scanf("%f", &number2);
            //Data output.
            printf("Result: %.2f", result = number1 * number2);
            return 0;
        }
        if (operation == '^')
        {
            printf("Chose the second number::  ");
            scanf("%f", &number2);
            //Data output.
            printf("Result: %.2f", result = pow(number1, number2));
            return 0;
        }
        if (operation == 'r')
        {
            //Data output.
            printf("Result: %.2f", result = sqrt(number1));
            return 0;

        }
        //Data output.
        printf("Invalid operation \n");
    }

    return 0;
}
