 #include <stdio.h>

 int main(){
  //a variable with a value
  int a = 10;

  //a pointer
  int *b;

  //memory address of s variable is assigned to a pointer
  b = &a;

  //display the memory address of the pointer
  printf("%p \n",b);

  //display the vale of a using the pointer
  printf("%d \n",*b);






 }
