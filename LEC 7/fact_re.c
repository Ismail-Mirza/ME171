 #include <stdio.h>
 int fact(int n){
   if (n == 0)
       {
         return 1;
       }
   return n * fact(n - 1);

 }
int main(int argc, char const *argv[]) {
  /* code */
  int n;

  printf("Enter number: ");
  scanf("%d", &n);
  int ans = fact(n);
  printf("Factorial of %d is %d\n",n,ans);
  return 0;
}
