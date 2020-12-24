#include <stdio.h>
int n = 3;
void input(int*arr,int n);
void output(int*arr);
int  work(int *arr1,int *arr2);
int main(int argc, char const *argv[]) {
  /* code */
int Force_V[n], Disp_V[n];
printf("Enter force Vector");
input(Force_V,n);
printf("Enter Displacement Vector");
input(Disp_V,n);
printf("Force Vector =");
output(Force_V);
printf("Displacement Vector =");
output(Disp_V);
printf("Work done=%d\n",work(Disp_V,Force_V));

  return 0;
}
void input(int*arr,int n)
{
  for (int i= 0; i < n ; i++){
    scanf("%d",&arr[i]);
  }
}
void output(int *arr)
{
  printf("%di+%dj+%dk\n", arr[0],arr[1],arr[2]);
}
int  work(int *arr1,int *arr2)
{
  return arr1[0]*arr2[0]+arr1[1]*arr2[1]+arr1[2]*arr2[2];

}
