#include<stdio.h>

int main(){
 int num1  , ans;

 printf("Enter number1 :");
 scanf("%d" ,&num1);

 ans = num1/2;

 if(ans==0){
    printf("this is a even : %d ",num1);
 }else{
     printf("this is a odd : %d ",num1);

 }

}
