#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char operator;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /, s for square, r for square root): ");
    scanf(" %c", &operator);
    
    if (operator == 's') {
        result = num1 * num1;
        printf("The square of %.2lf is: %.2lf\n", num1, result);
    } else if (operator == 'r') {
        if (num1 >= 0) {
            result = sqrt(num1);
            printf("The square root of %.2lf is: %.2lf\n", num1, result);
        } else {
            printf("Error! Square root of a negative number is not allowed.\n");
            return 1;
        }
    } else {
        printf("Enter second number: ");
        scanf("%lf", &num2);
    
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                    return 1;
                }
                break;
            default:
                printf("Invalid operator!\n");
                return 1;
        }
        
        printf("The result is: %.2lf\n", result);
    }
    return 0;
}
