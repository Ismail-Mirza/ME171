#include<stdio.h>
int main(int argc, char const *argv[]) {
  char name[100],number[100];
  FILE *in = fopen("input.txt","r");
  FILE *out = fopen("output.txt","w");
  // printf("%d",fscanf(in,"%s%s",&name,&number));
  while (fscanf(in,"%s%s",&name,&number)>0)
  {
    fprintf(out, "%s\t\t%s\n",name,number);
  }
  // fprintf(out,"%s\t\t%s",name,number);
  fclose(in);
  fclose(out);

  return 0;
}
