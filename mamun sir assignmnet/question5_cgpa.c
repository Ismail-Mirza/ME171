/*5. Write a C program to enter GPAs of five subjects each of 3 credits and calculate
CGPA.*/
#include<stdio.h>
#include<stdlib.h>

#define each_gpa 3
float cgpa(float *subs,int n){
  float sum = 0;
  for(int i =0;i<n;i++){
    sum += subs[i]*each_gpa;
  }
  return sum/((float)each_gpa*n);
}
int main(int argc, char const *argv[]) {
  int n = 5;
  float subjects[n];
  printf("Enter achieved gpa of 5 subjects---\n");
  for (int i =0;i< n;i++){
    printf("Subject %d :",i+1);
    scanf("%f",&subjects[i]);
    if (subjects[i]<=0 || subjects[i]>4){
      printf("Gpa can not be -ve nums or greater than 4.\n" );
      exit(1);
    }
  }
  printf("Cgpa is %0.2f \n",cgpa(subjects,n));

  return 0;
}
