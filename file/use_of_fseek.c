#include<stdio.h>
int main()
{
  FILE *in = fopen("input.txt","r");
  fseek(in,12,0);
  float num ;
  fscanf(in,"%f",&num);
  printf("%f\n",num);
  return 0;
}
