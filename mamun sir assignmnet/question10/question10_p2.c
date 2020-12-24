/*(ii) Taking c = 1.5 (constant) and varying the compression ratios from 8 to 20, in a
three-column output
text file, print the efficiencies of a petrol engine and a diesel engine with r values
in the first column and
second column showing the efficiency of a petrol engine, the third column
showing the efficiency of a diesel
engine. Check that in theory, for the same compression ratio, the efficiency of the
petrol engine is higher
than the efficiency of a diesel engine.
[Please note that in reality, petrol engines run at about r = 9 and diesel engines run
at about r = 18 (higher
compression ratio, which is not possible for petrol engines), so diesel engines are
more efficient than petrol
engines]*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[]) {
  FILE *out= fopen("output10_p2.txt","w");
  fprintf(out,"%s\t\t\t\t\t\t\t\t\t%s\t\t\t\t\t\t\t\t%s\n_______________________________________________________________________________________________\n","Compression ratio","Petrol Engine Efficiency.","Diesel Engine Efficiency.");
  fprintf(stdout,"%s\t\t\t\t\t%s\t\t\t\t\t%s\n________________________________________________________________________________________________________________________________________________________________\n","Compression ratio","Petrol Engine Efficiency.","Diesel Engine Efficiency.");
  float  c = 1.5,efi_diesel,d,efi_petrol,test_num;
  int key = 0;
  test_num = (21-8)/.5;
  for(float r=8.0;r<21;r += 1){
    d =(pow(c,1.4)-1)/(1.4*(c-1));
    efi_diesel = d*(1-(1/pow(r,0.4)))*100;
    efi_petrol = (1-(1/pow((double)r,0.4)))*100;
    fprintf(out, "%0.2f\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\%0.2f\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%0.2f\n",r,efi_petrol,efi_diesel);
    fprintf(stdout, "%0.2f\t\t\t\t\t\t\t\t%0.2f\t\t\t\t\t\t\t\t%0.2f\n",r,efi_petrol,efi_diesel);
    if (efi_diesel<efi_petrol){
      key += 1;
    }
  }
  fclose(out);
  printf("key=%d\n",key);
  if (key == (int)test_num){
    printf("In theory, for the same compression ratio, the efficiency of the petrol engine is higher than the efficiency of a diesel engine.\n------>This statement is verified.\n" );
  }else{
      printf("Statemnt can not be verified.\n");
  }

  return 0;
}
