#include<ctype.h>
#include<stdio.h>
int main(int argc, char const *argv[]) {

   FILE *in = fopen("input.txt","r");
   FILE *out = fopen("output.txt","w");
   char read;
   while((read=fgetc(in)) != EOF){
     //write in output file
     fputc(toupper(read),out);

   }
   fclose(in);
   fclose(out);
   printf("Text Converted Successfully:)");
  return 0;
}
