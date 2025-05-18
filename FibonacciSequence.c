#include <stdio.h>
int n;
int positive = 0;
int negative = 1;
int next;
int i = 0;

int main(){
    printf("Enter the value of N: \n");
    scanf("%d", &n);
    for(i; i<n; i++){
        printf(" %d", positive);
        next = positive + negative;
        positive = negative;
        negative = next;
    }
return 0;
}