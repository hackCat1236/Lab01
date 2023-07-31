#include <stdio.h>

int main(){

 int itemNo , qty;
 char decs[15];
 float price , tprice;

 printf("Enter Item Number:");
 scanf("%d" , &itemNo);

 printf("Enter Item Discription :");
 scanf("%s" , &decs );

 printf("Enter Quntity :");
 scanf("%d", &qty);

 printf("Enter price :");
 scanf("%f", &price);

 tprice = price*qty;

 printf("Item number : %d \n", itemNo);
 printf("Item decriptions : %s \n", decs);
 printf("Item price : %.2f \n ", tprice);


}
