#include <stdio.h>
int binary_src_loop(int data[],int target,int n){
  int low =0;
  int high  = n-1;

  while(low<=high){
    int mid  = (int) ((low+high)/2);
    if (target == data[mid]){
      return 1;
    }
    else if (target<data[mid]){
      high  = mid -1;
    }
    else{
      low = mid +1;
    }

  }
  return 0;

}
int main(int argc, char const *argv[]) {
  /* code */
  int n = 30;
  int data[n];
  int target = 19;
  for (int i= 0; i < n;i++){
    data[i] = i+1;
  }
  if (binary_src_loop(data,target,n)){
    printf("%d number is present in the data\n",target );
  }
  else{
    printf("%d number is not present in the data\n",target );
  }
  return 0;
}
