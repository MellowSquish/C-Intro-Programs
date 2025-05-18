#include <stdio.h>
#define add(a,b) (a+b)
#define sub(a,b) (a-b) 
#define mul(a,b) (a*b) 
#define div(a,b) (a/b)
int main(){
    int a;
    int b;
    int input;
    int result;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Select operation (1 for ADD, 2 for SUB, 3 for MUL, 4 for DIV): ");
    scanf("%d", &input);
    switch(input){
        case 1:
            result = add(a,b);
            printf("Result: %d + %d = %d", a, b, result);
            break;
        case 2:
            result = sub(a,b);
            printf("Result: %d - %d = %d", a, b, result);
            break;
        case 3:
            result = mul(a,b);
            printf("Result: %d * %d = %d", a, b, result);
            break;
        case 4:
            if (b == 0){
            printf("Error: Division by zero is not allowed");
            break;
            } else {
            result = div(a,b);
            printf("Result: %d / %d = %d", a, b, result);
            break;
            }
        default:
            printf("Error: Invalid Input");
            break;
    }
    return 0;
}