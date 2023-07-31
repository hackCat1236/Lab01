#include <stdio.h>

int main(){

int a , b ,sum , sub , mul , moduler ,divition ;

char op;
printf("select an Operatoers (+,-,/,%):");
scanf("%c", &op);
printf("Enter Two number \n");
scanf("%d", &a );
printf("Enter Two number \n");
scanf("%d",&b );

switch(op){
case '+':
    sum = a+b;
    printf("total of sum : %d \n" ,sum );
    break;
case '-':
    sub = a-b;
    printf("total of sub : %d \n" ,sub );
    break;
case '/':
    divition = a/b;
    printf("total of divition : %d \n" ,divition);
    break;
case '*':
    mul = a*b;
    printf("total of mul : %d \n",mul);
    break;
case '%':
    moduler = a%b;
    printf("total of moduler : %d \n" ,moduler);
   break;
default:
    printf("Error select opraton");
}
return 0;
}
