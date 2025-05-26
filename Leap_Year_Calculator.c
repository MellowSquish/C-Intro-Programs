#include <stdio.h>
/* Macros for classifying a normal year year vs a centry leap year */
#define normLeap(year) ((year % 4) == 0) && (!(year % 100 == 0))
#define centLeap(year) ((year % 400) == 0) && (year % 100 == 0)

/* Main method */
int main(){

    /* Variables */
    int year;

    /* User input */
    printf("Give me a year: ");
    scanf("%d", &year);

    /* Compares the year to a normal leap year or century leap year */
    if (normLeap(year)){
        printf("%d is a leap year", year);
    } 
    else if (centLeap(year)){
        printf("%d is a leap year", year);
    } else {
        printf("%d is NOT a leap year", year); // if neither it is classified as a normal year
    }
    return 0;
}
