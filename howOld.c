#include <stdio.h>

int main(){

double c,f;

printf("Enter degree Fahrenheit : ");
scanf("%lf", &f);

c = (5.0/9.0) * (f-32);
printf("Convert a temperature reading in degrees Fahrenheit to degrees Celsius : %lf " , c);


}
