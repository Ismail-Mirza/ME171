#include <stdio.h>
int fact(int n){
  if (n == 0)
      {
        return 1;
      }
  return n * fact(n - 1);

}
int main(int argc, char const *argv[]) {
  /* code */
  int n ;
  int pascal_num;
  printf("Enter row number :" );
  scanf("%d",&n);
  for(int i = 0 ;i < n ; i ++)
  {
      int max_space = n-1;
      // first print space each line
      // when  number in line is 1 space =2
      //number of num is 2 than spcae=1
      //means, space = max_space-i
      for(int space = 0 ; space < max_space-i; space++){
        printf(" ");
      }
      for (int j =0; j <= i  ; j++){
        pascal_num = fact(i)/(fact(j)*fact(i-j));
        printf("%d ",pascal_num);
      }
      printf("\n");

  }
  return 0;
}
