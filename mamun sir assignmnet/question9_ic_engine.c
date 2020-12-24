/*9. The efficiency, e of a petrol engine depends on the compression ratio, r.
e = [1 – {1/(r^0.4)}] *100%.
In a two-column output text file, print the efficiencies of a petrol engine with the
first column showing the
compression ratios from 5 to 12 and second column showing the corresponding
calculated efficiencies.*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[]) {
  float efi;
  FILE *out =fopen("output9.txt","w");
  fprintf(out, "%s\t\t\t%s\n","Compression ratio(r)","Efficiency(e)" );
  fprintf(stdout, "%s\t\t\t%s\n","Compression ratio(r)","Efficiency(e)" );
  for (int i=5;i<=12;i++){
    efi = (1-(1/pow((double)i,0.4)))*100;
    // printf("%f\n",efi);
    fprintf(out, "%d\t\t\t\t\t\t%0.2f%\n",i,efi );
    fprintf(stdout, "%d\t\t\t\t\t\t%0.2f%\n",i,efi );
  }
  fclose(out);
  printf("******Program Execute Successfully******\n");
  return 0;
}
