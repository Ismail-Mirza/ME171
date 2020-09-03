#include<stdio.h>
#include<conio.h>
int max= 10;
int main(){
  int arry[max];
  printf("Enter element in arry\n");
  for (int i = 0; i <max;i++){
    scanf("%d", &arry[i]);
  }
  for ( int i=0 ; i < max; i++){
      int key = 0;
      for(int j = 0; j<max-i;j++){
        if (arry[j] > arry[j+1]){
          // than two number swap between them
          int temp = arry[j];
          arry[j] = arry[j+1];
          arry[j+1]=temp;
          key= 1;
        }
      }
      if (key== 0){
        // means no swap
        // exist outturforloop
        break;
      }
  }
  // output result
  for(int i = 0; i < max; i++){
    printf("%d \t", arry[i]);
  }
}
