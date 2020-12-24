#include<stdio.h>
int n = 10;
int main(int argc, char const *argv[]) {
  FILE *in = fopen("input.txt","r");
  FILE *out = fopen("output.txt","w");
  float arr[n];
  //reading data from the file
  for (int i = 0 ; i < n ; i++)
  {
    fscanf(in,"%f",&arr[i]);
  }
  //sorting cgpa using bubble sort
  for (int i = 0; i < n; i++)
  {
    for (int j=0;j<n-j;j++){
      if (arr[j]<arr[j+1]){
        float temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] =temp;
      }
    }
  }

  //writing in the file
  fprintf(out, "Merit list of students :\n" );
  fprintf(out, "Merit Postion\t\t\tCgpa\n");
  for (int i= 0; i < n ; i++){
    fprintf(out, "%d\t\t\t\t\t\t\t\t\t%4.2f\n",i+1,arr[i] );
  }
  fclose(in);
  fclose(out);
  printf("Resulted Sorted Succesfullly:)");
  return 0;
}
