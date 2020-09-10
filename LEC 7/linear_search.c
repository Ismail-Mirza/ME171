#include <stdio.h>
int linear_src(int arr[],int target,int n){
  for(int i = 0; i < n; i++){
    if (arr[i] == target){
      return 1;
    }
  }
  return 0;

}
int main(int argc, char const *argv[]) {
  /* code */
  int n = 20 ;
  int arr[n];
  int target = 18;
  for (int i = 0 ; i<n; i++){
      arr[i] = i+2;
  }
  if(linear_src(arr,target,n) == 1){
    printf("%d is present in the data\n",target );
  }
  else{
    printf("%d is not present in the data\n",target );
  }

  return 0;
}
