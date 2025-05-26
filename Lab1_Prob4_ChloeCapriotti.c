#include <stdio.h>
/* Main method */
int main(){

    /* Variables */
    int n;
    int positive = 0; //Positive index
    int negative = 1; //Negative index
    int next;
    int i = 0;

    /* User input for nth number */
    printf("Enter the value of N: ");
    scanf("%d", &n);

    /* For loop for printing fibonacci sequence to the nth number */
    for(i; i<n; i++){
        printf(" %d", positive);
        next = positive + negative;
        positive = negative;
        negative = next;
    }
return 0;
}