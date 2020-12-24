#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[]) {
  char dept[50];
  printf("Enter your Department Name:\n");
  gets(dept);
  int count  = strlen(dept);
  for (int i = 0; i<count; i++){
    for (int j= 0;j<=i;j++){
      printf("%c",dept[j]);
    }
    printf("\n");
  }
  printf("____________________________________\n\n");
  for (int i=0; i <count;i++){
    for(int j=0;j<count-i;j++){
      printf("%c",dept[j]);
    }
    printf("\n");
  }

  return 0;
}
