#include <stdio.h>

int main(){

int counter = 1, oddc = 0,evenc = 0,no;

do{

  printf("Enter number %d please : ",counter);
  scanf("%d",&no);
    if(no%2==0){
        evenc = evenc + 1; //evenc++

    }else{
    oddc = oddc + 1; //oddc++

    }
    counter++;
}while(counter<=10);

printf("even numbers tot = : %d  \n",evenc);
printf("odd numbers tot = : %d  \n",oddc);
}
