/*
 * Module: ICT1002
 * Language: C
 * Lab 1 exercise 3
 * Done By: bitxer
 */
#include <stdio.h>

int main(int argc, char * argv){
    float kg = 0, m = 0;
    printf("Enter your weigh in kilograms: ");
    scanf("%f", &kg);
    printf("Enter your height in metres: ");
    scanf("%f", &m);
    float bmi = 0;
    if (kg > 0 && m > 0){
        bmi = kg / (m * m);
        char * range;
        if (bmi < 18.5){
            range = "underweight";
        } else if (bmi < 25.0) {
            range = "normal";
        } else if (bmi < 29.9) {
            range = "overweight";
        } else {
            range = "obese";
        }
        printf("Your BMI is %.1f. That is within the %s range.\n", bmi, range);
    }
}