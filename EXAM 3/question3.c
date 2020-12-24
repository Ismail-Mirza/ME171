 #include<stdio.h>
 typedef struct mystruct{
   char name[24];
   int age;
   int stu_ID;
 } me;
 int main(int argc, char const *argv[]) {
   /* code */
   me student = {"Mohammad Ismail",19,1810148};
   printf("Name:%s\nAge:%d\nStudent ID:%d\n",student.name,student.age,student.stu_ID );

   return 0;
 }
