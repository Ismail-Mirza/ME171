#include<stdio.h>
typedef struct mystruct{
char name[24];
int age;
int stu_ID;
}me;
int main(void)
{
  int R = 148;
  union data{
  float any_float[R];
  char any_string[80];
  float another_float;
  }data2;
  printf("%d\n",sizeof(data2));
}
