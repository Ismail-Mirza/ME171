/*4. Write a C program to enter base and height of a triangle and find its area.*/
#include<stdio.h>
#include<stdlib.h>
float triangleArea(float base,float height){
  return 0.5*base*height;
}
 int main(int argc, char const *argv[]) {
  float base ,height;
  printf("Enter triangle base and height:");
  scanf("%f %f",&base,&height);
  if (base<=0 || height<=0){
    printf("Base or height must be +ve numbers.\n" );
    exit(1);
  }
  else{

    printf("Area of triangle is %0.2f square unit\n",triangleArea(base,height));
  }
  return 0;
}
