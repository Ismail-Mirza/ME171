// 2p−1(2p − 1)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int prime(double x)
{
  int flag = 1;
  for (int i = 2 ; i < x; i++)
  {
    if ((int)x%i==0)
    {
      flag = 0;
    }

  }
  return flag;
}
int main(int argc, char const *argv[]) {
  /* code */
  int run = 1;
  int count = 1;
  int i = 2;
  while (run==1) {
    /* code */
    double x = pow(2,i)-1;
    if(prime(x) == 1 ){
      double perfect_num;
      perfect_num = (pow(2,i-1))*x;
      printf("perfect number %d is %0.0f\n",count,perfect_num);
      count += 1;
    }
    if (count == 32){
      run =0;
    }
    i++;

  }
  return 0;
}
