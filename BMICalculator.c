#include <stdio.h>
/*BMI calculator based on user weight in kg and height in meters

• BMI < 18.5: Underweight
• 18.5 <= BMI < 25: Normal weight
• 25 <= BMI < 30: Overweight
• BMI >= 30: Obese
Formula for BMI = weight / (height)²

1. Use variables to store weight, height, and BMI.
2. Use control flow statements to classify the BMI.
3. Use macros to define the BMI thresholds

Sample output
Enter weight in kilograms: 70
Enter height in meters: 1.75
BMI = 22.86
Category: Normal weight

*/
#define unweight(BMI) (BMI < 18.5)
#define noweight(BMI) (18.5 <= BMI) && (BMI < 25)
#define ovweight(BMI) (25 <= BMI) && (BMI < 30)
#define obsese(BMI) (BMI >= 30)

int main(){
float weight;
float height;
float BMI;
printf("Enter weight in kilograms: " );
scanf("%f", &weight);
printf("Enter height in meters: ");
scanf("%f", &height);
BMI = (weight / (height * height));
printf("BMI = %.2f\n", BMI);
if (unweight(BMI)){
    printf("Under weight");
} else if (noweight(BMI)){
    printf("Normal weight");
} else if (ovweight(weight)){
    printf("Over weight");
} else if (chonky(BMI)){
    printf("Obese");
}
return 0;
}