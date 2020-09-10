#include <stdio.h>
int binary_src_rec(int data[],int target,int n, int low,int high){
  if (low > high){
    return 0;
  }
  else {
    int mid = (int) ((low+high)/2);
    if (target == data[mid]){
      return 1;
    }
    else if (target < data[mid]){
      // then higher bound the of the array change
      return  binary_src_rec(data, target, n , low ,mid-1);
    }
    else{
      return binary_src_rec(data,target,n,mid+1,high);
    }
  }
}
int main(int argc, char const *argv[]) {
  /* code */

  int target = 19;
  int n = 30;
  int data[n];
  for (int i = 0; i < n ; i++){
    data[i] = i +1;
  }
  if (binary_src_rec(data,target,n,0,n)){
    printf("%d is present in the data set\n",target);
  }
  else{
    printf("Target data not found\n" );
  }


  return 0;
}
