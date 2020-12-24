/*Write a C program to enter radius of a circle and find its diameter,
circumference and area.*/
#include<stdio.h>
#include<stdlib.h>
#define pi 3.1416
int main(int argc, char const *argv[]) {
  float radius;
  printf("Enter Radius of Circle (in meter):" );
  scanf("%f",&radius);
  if (radius<=0){
    printf("Radius must be a +ve numbers \n");
    exit(1);
  }
  printf("Diameter is %0.2f m\n", 2*radius);
  printf("circumference is %0.2f m\n",2*pi*radius );
  printf("Area is %0.2f m^2\n",pi*radius*radius );
  return 0;
}
