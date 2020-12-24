/*8. Write a C program which will get input from a text file having four columns.
First column contains
roll numbers from 1 to 10 and the next three columns contain CT1, CT2 and CT3
marks. The program thenprocesses best two among the three CTs for each roll number and add the best two
marks. Finally, it writes
the output to another text file with two columns, first column containing the roll
numbers and the second
with total marks as obtained by adding the best two.*/
#include<stdio.h>
int main(int argc, char const *argv[]) {
  /* code */
  int ct1,ct2,ct3,roll,first,sec;
  FILE *in =fopen("input8.txt","r");
  FILE *out = fopen("output8.txt","w");
  fprintf(out, "%s\t\t\t\t%s\n","Roll","Total Marks");
  printf("Input from File:\n_______________________________________________________________\n");
  printf("Roll\t\t\tCt1\t\tCt2\t\tCt3\n");
  while (fscanf(in,"%d %d %d %d",&roll,&ct1,&ct2,&ct3) > 0){
    if (ct1>ct2)
    {
      if(ct1>ct3)
      {
        first =ct1;
        if (ct3>ct2)
        {
          sec = ct3; //as ct3 greater than ct2
        }
        else
        {
          sec = ct2; //as ct3 less than ct2

        }
      }
      else
      {
        first =ct3; // ct3 greater than ct1
        sec = ct1; //as ct1 is greater than ct2
      }
    }
    else
    {
      //ct2 greater than ct 1
      if (ct2>ct3){
        first = ct2; //ct2 greater than ct 3
        if (ct3>ct1){
          sec =ct3; //ct3 greater than ct1

        }
        else{
          sec = ct1;
        }
      }
      else{
        first = ct3; //as ct3 greater than ct2
        sec  = ct2; //as ct2 greater than ct1
      }


    }
    // printf("first highests ct: %d Second  highests ct:%d\n",first,sec);
    printf("%d\t\t\t%d\t\t%d\t\t%d\n",roll,ct1,ct2,ct3 );
    fprintf(out, "%d\t\t\t\t\t%d\n",roll,first+sec);
  }
  fclose(in);
  fclose(out);
  FILE *read = fopen("output8.txt","r");
  printf("Data from output file:\n______________________________________________________________\n" );
  printf("Roll\t\t\t\tTotal marks\n");
  fseek(read,20,SEEK_SET);
  while(fscanf(read, "%d%d",&roll,&ct1)>0){
    printf("%d\t\t\t\t%d\n",roll,ct1 );
  }
  fclose(read);


  return 0;
}
