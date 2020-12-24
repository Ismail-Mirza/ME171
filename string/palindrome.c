#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]) {

  char  orginal[50],*copy;
  printf("Enter string:");
  gets(orginal);
  copy=strdup(orginal);
  strrev(copy);
  if (strcmp(copy,orginal) == 0){
    printf("Palindrome");
  }
  else{
    printf("Not Palindrome");
  }


  return 0;
}
