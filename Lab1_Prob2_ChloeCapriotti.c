#include <stdio.h>
/* Macros for BMI classification */
#define unweight(BMI) (BMI < 18.5)
#define noweight(BMI) (18.5 <= BMI) && (BMI < 25)
#define ovweight(BMI) (25 <= BMI) && (BMI < 30)
#define obese(BMI) (BMI >= 30)

/* Main method */
int main(){
    
    /* Variables */
    float weight;
    float height;
    float BMI;

    /* User input for weight and height */
    printf("Enter weight in kilograms: " );
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    BMI = (weight / (height * height)); // Calculates BMI index number based on height and weight
    printf("BMI = %.2f\n", BMI);
    
    /* Takes BMI index number and compares it with macros until it satisfies one of them */
    if (unweight(BMI)){
        printf("Under weight");
    } else if (noweight(BMI)){
        printf("Normal weight");
    } else if (ovweight(BMI)){
        printf("Over weight");
    } else if (obese(BMI)){
        printf("Obese");
    }
return 0;
}