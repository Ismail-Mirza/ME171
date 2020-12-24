#include<stdio.h>
typedef struct stduent_info{
  char name[50];
  int attendance:6;
  int ct:7;
  int term_final:9;
  char *lt_grade;
} si;
int main(int argc, char const *argv[]) {
  int student_n,total_number=300, obtained_number,temp;
  printf("Enter number of Students:");
  scanf("%d",&student_n);
  printf("\n");
  getchar();
  si students[student_n];
  float percentage;

  for (int i =0;i<student_n;i++){
    printf("Enter student's name:");
    fgets(students[i].name,sizeof(students[i].name),stdin);
    printf("\nAttendance(30):" );
    scanf("\n%d",&temp);
    students[i].attendance=temp;
    printf("\nCT(60) :");
    scanf("%d",&temp);
    students[i].ct = temp;
    printf("\nTerm Final exam(210):" );
    scanf("%d", &temp);
    printf("\n");
    getchar();
    students[i].term_final=temp;
    obtained_number = students[i].attendance+students[i].ct+students[i].term_final;
    percentage = ((float)obtained_number/total_number)*100;
    if (percentage>=80){
      students[i].lt_grade = "A+";
    }
    else if (percentage>=75 && percentage < 80){
      students[i].lt_grade = "A";
    }
    else if (percentage>= 70 && percentage < 75){
      students[i].lt_grade = "A-";
    }
    else if (percentage >=65 && percentage <70){
      students[i].lt_grade = "B+";
    }
    else if (percentage>=60 && percentage <65){
      students[i].lt_grade = "B";
    }
    else if (percentage>=55 && percentage<60){
      students[i].lt_grade = "B-";
    }
    else if (percentage>=50 && percentage<55){
      students[i].lt_grade = "C+";
    }
    else if (percentage>=45 && percentage<50){
      students[i].lt_grade = "C";
    }
    else if (percentage>=40 && percentage<45){
      students[i].lt_grade = "D";
    }
    else {
      students[i].lt_grade = "F";
    }

  }
  printf("Name\t\t Attendance(30)\t\tCT(60)\t\t Term final exam(210)\t\tGrade\n");
  for (int i =0; i <student_n;i++ ){
      printf("%s\t\t\t",students[i].name);
      printf("%d\t\t",students[i].attendance);
      printf(" %d\t\t\t",students[i].ct);
      printf("%d\t\t\t",students[i].term_final);
      printf(" %s",students[i].lt_grade);
      printf("\n");
  }



  return 0;
}
