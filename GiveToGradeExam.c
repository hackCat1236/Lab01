#include <stdio.h>

int main(){

float n;

printf("Enter Your Mark : ");
scanf("%f",&n);

if(n>=75){
    printf("Your Grade is a : A ");
}else if(n>=65){
    printf("Your Grade is a : B ");
}else if(n>=55){
    printf("Your Grade is a : C ");
}else if(n>=45){
    printf("Your Grade is a : S ");
}else if(n<45){
  printf("Your Grade is a : Fuck ");
}

}
