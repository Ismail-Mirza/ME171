#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]) {
  char para[1000];
  printf("Enter String:");
  gets(para);
  char ch;
  printf("Enter a character to find frequency: ");

  ch=getchar();
  int count = 0;
  for (int i=0;i<strlen(para);i++){
    if (ch==para[i]){
      count +=1;
    }
  }

  printf("Frequence of letter %c is %d\n",ch,count);
  return 0;
}
