#include <stdio.h>

#define normLeap(year) ((year % 4) == 0) && (!(year % 100 == 0))
#define centLeap(year) ((year % 400) == 0) && (year % 100 == 0)
int year;

int main(){
    printf("Give me a year: \n");
    scanf("%d", &year);

    if (normalLeap(year)){
        printf("This is a leap year: %d", year);
    } 
    else if (centuryLeap(year)){
        printf("This is a leap year: %d", year);
    } else {
        printf("This is NOT a leap year: %d", year);
    }
    return 0;
}