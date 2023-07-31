#include <stdio.h>


void findFever(float f){

    //Low-grade fever 100 F-101 F
    //Intermediate grade 102 F
    //High-grade fever 103 F-104 F.
    //Dangerous fever 105 F-107 F
    if(f == 100 && f <= 101){

        printf("Low-grade fever: 100F - 101F");

    }else if(f == 102){

       printf("Intermediate grade: 102 F");

    }else if(f == 103 && f <= 104){

       printf("High-grade fever 103 F-104 F");

    }else if(f == 105 && f >= 107){

      printf("Dangerous fever 105 F-107 F");

    }else{

      printf("Fuck oFF Today You Dead....!");

    }

}
int main(){

   float f;
   printf("Enter Fahrenheit :  ");
   scanf("%f",&f);

   findFever(f);


}
