#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int n);
void input(int*arr,int n);
int main(int argc, char const *argv[]) {
  /* Write a c program to reverse the elements of an array using pointer. You need to reverse the position
of the elements present in the array and modify the existing array. The size and elements of the array
should be taken as input and memory allocation should be done by using dynamic memory
allocation. */
int n ;
printf("Enter arry size :");
scanf("%d",&n);
int *arr = (int *)malloc(n*sizeof(int));
printf("Enter element in arr");
input(arr,n);
reverse(arr,n);
printf("Output in reverse\n");
for (int i=0;i<n;i++)
{
  printf("%d\t",arr[i]);
}
free(arr);
return 0;
}
void input(int*arr,int n)
{
  for (int i= 0; i < n ; i++){
    scanf("%d",&arr[i]);
  }
}
void reverse(int*arr,int n)
{
  int i,j,temp;
  for ( i= 0,j=n-1; i<n/2;i++,j--){
      temp = arr[i];
      arr[i] =arr[j];
      arr[j] = temp;
  }
}
