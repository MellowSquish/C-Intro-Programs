#include <stdio.h>
/* Macros for calculations */
#define add(numA,numB) (numA+numB)
#define sub(numA,numB) (numA-numB) 
#define mul(numA,numB) (numA*numB) 
#define div(numA,numB) (numA/numB)

/* Main method */
int main(){

    /* variables */
    int numA;
    int numB;
    int input;
    int result;

    /* user input for numbers and operation selection */
    printf("Enter first number: ");
    scanf("%d", &numA);
    printf("Enter second number: ");
    scanf("%d", &numB);
    printf("Select operation (1 for ADD, 2 for SUB, 3 for MUL, 4 for DIV): ");
    scanf("%d", &input);

    /* switch case for operation selection */
    switch(input){
        case 1:
            result = add(numA,numB);
            printf("Result: %d + %d = %d", numA, numB, result);
            break;
        case 2:
            result = sub(numA,numB);
            printf("Result: %d - %d = %d", numA, numB, result);
            break;
        case 3:
            result = mul(numA,numB);
            printf("Result: %d * %d = %d", numA, numB, result);
            break;
        case 4:
            if (numB == 0){ // if number B is 0 you can't divide due to arithmetic error
            printf("Error: Division by zero is not allowed");
            break;
            } else {
            result = div(numA,numB);
            printf("Result: %d / %d = %d", numA, numB, result);
            break;
            }
        default:
            printf("Error: Invalid Input"); // if user uses an option that doen't exist
            break;
    }
return 0;
}