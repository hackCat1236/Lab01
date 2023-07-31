#include <stdio.h>


void dispaly(int a,int b){

    int sum,sub;
    sum = a + b;
    sub = a - b;

  printf("Sum : %d \n",sum);
  printf("Sub : %d ",sub);


}

int main(){
   int a,b;
   printf("Enter Number_1 Please : ");
   scanf("%d", &a);

   printf("Enter Number_2 Please : ");
   scanf("%d", &b);

   dispaly(a,b);


}
