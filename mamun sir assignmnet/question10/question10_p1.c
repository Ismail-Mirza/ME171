/*The efficiency, e of a diesel engine depends on the compression ratio, r and the
cut-off ratio, c.
e = d * [1 – {1/(r^0.4)}] *100%, where, d = [c^1.4 – 1) / {1.4 *(c – 1)}]
(i) Taking r = 18 (constant) and varying the value of c from 1.1 to 2.0 in a step of
0.1 (e.g., 1.1, 1.2,
1.3....1.9, 2.0), print in a two-column output file, the values of d in one column and
corresponding diesel
cycle efficiency in another column. Check that for the same compression ratio, the
efficiency decreases withincrease in cut-off ratio, c.
*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[]) {
  FILE *out= fopen("output10_p1.txt","w");
  fprintf(out,"%s\t\t\t\t%s\n","d","Efficiency");
  int r = 18;
  float d,e,pre_cutoff,pre_efi;
  int key_cutoff=0,key_efi=0;
  for (float c=1.1;c<2.1;c += 0.1){
      d =(pow(c,1.4)-1)/(1.4*(c-1));
      e = d*(1-(1/pow(r,0.4)))*100;
      printf("Cutoff Ratio = %0.2f Efficiency=%0.2f\n\n",c,e);
      fprintf(out, "%0.2f\t\t\t%0.2f%\n",d,e);
      if (c>pre_cutoff){ //checking that cutoff ratio increasing in each iteration
        pre_cutoff =c;
        key_cutoff += 1;
      }
      if (e<pre_efi){ //checking that efficiency is decreases in each iteration
        pre_efi = e;
        key_efi += 1;
      }
  }
  fclose(out);
  //if key_efi == key_cutoff than we conclude that efficiency decreases with increase in cutoff ratio
  if (key_efi==pre_cutoff){
    printf("Efficiency decreases with increase in cutoff ratio.\nStatement verified.\n");
  }else{
    printf("Efficiency increases with increase in cutoff ratio.\nStatement Not verified.\n");
  }


  return 0;
}
