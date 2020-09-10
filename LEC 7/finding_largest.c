#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  /* code */
  int largest;
  int n = 500000;
  int input[n];
  // taking input user
  srand(time(0));
  // in this case i will generate them by rand function
  printf("Inputed number:\n");
  for(int i= 0 ; i < n ; i++){
      input[i]=rand();
      printf("%d\t", input[i]);
  }
  // set largest to the first number
  //implement using for loop
  largest = input[0];
  for( int i =1; i < n ; i++){
    if (largest< input[i]){
      largest = input[i];
    }
  }
  printf("\nOutput for loop:\nLargest number: %d\n",largest);

  //implement using while loop
  int j = 1;
  int largest_while = input[0];
  while(j < n){
    if (largest_while < input[j]){
      // change largest number
      largest_while = input[j];
    }
    j++;
  }
  printf("\nOutput while loop:\nLargest number: %d\n",largest_while);

  //implement using do while loop
  int k = 1;
  int largest_do = input[0];
  do {
    /* code */
    if (largest_do < input[k]){
      largest_do = input[k];
    }
    k++;

  } while(k<n);
  printf("\nOutput do while:\n Largest number: %d",largest_do);
  return 0;
}
