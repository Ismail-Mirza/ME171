#include <stdio.h>
long int fact_for(int n){
    long int result=1;
    for( int i = n ; i > 0 ; i--){
      result *=i;
    }
  return result;
}
long int fact_while(int n){
  long int result = 1;
  int i = n;
  while (i> 0) {
    /* code */
    result *=i;
    i--;
  }
  return result;

}
long int fact_do(int n){
  long int result = 1;
  int i = n;
 do {
    /* code */
    result *=i;
    i--;
  }
  while (i> 0);
  return result;

}
int main(int argc, char const *argv[]) {
 /* code */
 int n;
 printf("Enter number: \t" );
 scanf("%d",&n );
 printf("By for loop:\n");
 long int ans = fact_for(n);
 
 printf("Factorial of %d is %ld\n\n",n,ans);
 printf("By  while loop:\n");
 long int ans_while = fact_while(n);


 printf("Factorial of %d is %ld\n\n",n,ans_while);
 printf("By do while loop:\n");
 long int ans_do= fact_do(n);

 printf("Factorial of %d is %ld\n",n,ans_do);
 return 0;
}
