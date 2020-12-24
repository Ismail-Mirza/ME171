/*6. Write a C program to enter your height in centimeter and weight in kg, convert
cm into meter and
calculate Body Mass Index (BMI).
bmi = weight in kg / (height in m)^2*/
#include<stdio.h>
#include<stdlib.h>
float bmi(float height,float weight){
  return weight/(height*height);


}
int main(int argc, char const *argv[]) {
  float h,w;
  printf("Height(in centimeter):");
  scanf("%f",&h);
  if (h<=0){
    printf("Height can not be -ve numbers\n");
    exit(1);
  }
  printf("Weight (in kg ):" );
  scanf("%f",&w);
  if (w<=0){
    printf("Weight can not be -ve \n" );
    exit(1);
  }
  h = h/100.0;
  printf("Height in meter is %0.2fm\n",h);

  printf("Bmi is %0.2f\n ",bmi(h,w));
  return 0;
}
