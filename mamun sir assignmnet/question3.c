/*3. Write a C program to enter two angles of a triangle and find the third angle.*/
#include<stdio.h>
float thirdAngle(float ist,float secnd){
  return 180-ist-secnd;
}
int main(){
  float ist,secnd;
  printf("Enter first two angle :");
  scanf("%f%f",&ist,&secnd );
  printf("Thire angle is %0.2f Degree.\n",thirdAngle(ist,secnd));
  return 0;
}
