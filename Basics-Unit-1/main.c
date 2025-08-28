#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    // Identifier & Keywords
    int myVariable = 5;
    printf("Value of myVariable: %d\n", myVariable);

    // Operators & Expressions
    int sum = myVariable + 10;
    printf("Value of sum: %d\n", sum);

    // Input & Output
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    printf("You entered: %d\n", userInput);

    // Casting
    float floatValue = (float)userInput;
    printf("Float value: %.2f\n", floatValue);

    // Precedence
    int result = 10 + 5 * 2;
    printf("Value of result: %d\n", result);

    return 0;
}
