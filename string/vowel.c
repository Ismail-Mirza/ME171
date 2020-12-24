#include<stdio.h>
#include<curses.h>
#include<string.h>
int main(int argc, char const *argv[]) {
  /* code */
  char para[1000];
  printf("Enter Word or sentence:");
  gets(para);
  char vowel[]= {'a','e','o','i','u'};
  para=strlwr(para);
  puts(para);

  return 0;
}
