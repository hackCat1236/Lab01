#include <stdio.h>

int main(){

float basicSalary;
int Year;
char city[10];

float tot1;
float tot2;



printf("Enter Your Basic Salary : ");
scanf("%f" , &basicSalary);


if(basicSalary <= 25000){
     tot1 = basicSalary*0.1 + basicSalary;
}else if(25000 <= basicSalary && 50000 > basicSalary){
     tot1 = basicSalary*0.12 + basicSalary;
}else{
     tot1 = basicSalary*0.15 + basicSalary;
}

printf("Enter Your WORKING YEAR : ");
scanf("%d" , &Year);

if( Year > 5){
    tot1 += basicSalary * 0.1;
}

printf("Enter Your WORKING City : ");
scanf("%s" , &city );

if(strcmp( city , "c") == 0 ){

      tot2 = tot1 + 2500;
}

printf("YOUR TOTAL SALARY IS A : %.2f ",tot2);

}
