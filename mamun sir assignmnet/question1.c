/*Write a C program to enter length and breadth of a rectangle and find its
perimeter and its area.*/

#include<stdio.h>

int main(int argc, char const *argv[]) {
  float length,width,area,perimeter;
  printf("\nEnter length of the rectangle(in meter):");
  scanf("%f",&length);
  if (length<=0){
    printf("Length of rectangle must be a positive numbers");
  }
  printf("\nEnter breadth of rectangle(in meter) :" );
  scanf("%f",&width);
  if (width<=0){
    printf("Length of rectangle must be +ve numbers");
  }
  printf("\nArea of reactangle is %0.2f m^2",length*width);
  printf("\nPerimeter of reactangle is %0.2f m",2*(length+width));
  return 0;
}
