#include <stdio.h>

int main(){

 int size,i,tot1=0,tot2=0;
 printf("Enter please size : ");
 scanf("%d", &size);

 int arr1[size];
 for(i=0; i<size; i++){
    printf("Enter Value In Fist Array : ");
    scanf("%d", &arr1[i]);
    tot1 += arr1[i];

 }
 printf("First Array Values :- ");
 for(i=0; i<size; i++){
    printf("%3d",arr1[i]);
 }
 printf("\n");
 printf("total of first Array :- %d \n",tot1);

 int arr2[size];
 for(i=0; i<size; i++){

    printf("Enter Value In Second Array : ");
    scanf("%d", &arr2[i]);
    tot2 += arr2[i];

 }
  printf("Second Array Values :- ");
 for(i=0; i<size; i++){
    printf("%3d",arr2[i]);
 }

 printf("\n");
 printf("total of second Array :- %d",tot2);

 printf("\n<<Get Vector Sum>>\n");

 int sum[size];
 int pop[size];

 for(i=0; i<size; i++){
    sum[i] = arr1[i] + arr2[i];
    pop[i] = arr1[i] * arr2[i];
 }

 for(i=0; i<size; i++){
    printf("%d \n",sum[i] );
 }

 printf("<<get Vector Product In Array>>\n");

int tot3 = 0;
 for(i=0; i<size; i++){
    printf("%d\n",pop[i]);
    tot3 += pop[i];
 }

 printf("<<get the total Scaler Product>>\n");

 printf("total Of A product Scale : %d ",tot3);

}
