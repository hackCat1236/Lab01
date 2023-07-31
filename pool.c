#include <stdio.h>

int main(){

double n1 , n2 , temp;
printf("Enter fist num1 :");
scanf("%lf" , &n1);

printf("Enter fist num2 :");
scanf("%lf" , &n2);

temp = n1;

n1 = n2;

n2 = temp;

printf("after swap number1 : %.2f \n " , n1);
printf("after swap number2 : %.2f \n " , n2);

}
