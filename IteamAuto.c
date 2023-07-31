#include <stdio.h>
#include <stdlib.h>

int main() {
    float PI = 3.1415;
    float area, parameter;
    int radius, side, length, width;

            printf("Enter a radius of the circle: \n ");
            scanf("%d", &radius);
            area = (2 * radius) * PI;
            parameter = 2 * PI * radius;
            printf("The area of the circle is %.02f and parameter is %.02f\n",
                   area, parameter);

            printf("Enter the side of the square: \n");
            scanf("%d", &side);
            area = side * side;
            parameter = 4 * side;
            printf("The area of the circle is %.02f and parameter is %.02f \n",
                   area, parameter);

            printf("Enter the width of the rectangle: \n");
            scanf("%d", &width);
            printf("Enter the length of the rectangle: \n");
            scanf("%d", &length);
            area = length * width;
            parameter = (2 * length) + (2 * width);
            printf("The area of the circle is %.02f and parameter is %.02f \n",
                   area, parameter);

            printf ("Thank and bye \n");


}
