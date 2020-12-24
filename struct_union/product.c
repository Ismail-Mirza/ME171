#include<stdio.h>
struct product{
  char name[50];
  int num;
  float price;
  char discount;
};
int main(int argc, char const *argv[]) {

  struct product ps4;
  printf("enter product name:");
  scanf("%s",&ps4.name);
  printf("\nenter price:");
  scanf("%f",&ps4.price);
  printf("\nany discount?");
  scanf("\n%c",&ps4.discount);
  printf("Product:%s \n Price:%.2f \nDiscount:%c\n",ps4.name,ps4.price,ps4.discount );
  return 0;
}
