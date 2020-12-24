#include<stdio.h>
typedef struct bookstruct{
  char *name;
  float price;
}book;
int main(int argc, char const *argv[]) {
  /* code */
  int size = 200;
  float price;
  char *name;

  book booklist[size];
  FILE *in=fopen("pricelist.txt","r");
  FILE *out=fopen("output.txt","w");
  for (int i= 0;i<size;i++){
    int key = fscanf(in,"%f %s",&price,&name);
    if (key>0){
      booklist[i].price=price;
      booklist[i].name=name;
    }
    else{
      break;
    }

  }

  //sorting in ascending order
  for (int i=0;i<size;i++){
    for (int j=0;j<size-i;j++){
      if(booklist[j].price>booklist[j+1].price){
        //swap book
        book temp;
        temp.price = booklist[j].price;
        temp.name = booklist[j].name;
        booklist[j].price = booklist[j+1].price;
        booklist[j].name = booklist[j+1].name;
        booklist[j+1].price=temp.price;
        booklist[j+1].name = temp.name;
      }
    }
  }
  //heading of output.txt
  fprintf(out,"SI no. \tPrice\tBook\n");
  int my_id = 148; //last 3digt
  for (int i=my_id;i<=size;i++ ){
    fprintf(out,"%d\t%f\t%s\n",i,booklist[i-1].price,booklist[i-1].name);
  }
  return 0;
}
