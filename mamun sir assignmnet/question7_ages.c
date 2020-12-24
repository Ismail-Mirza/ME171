/*. Write a C program which asks for input from keyboard your birth day, month
and year, calculates your
age in years, months and days based on current localtime on your computer and
prints output to the monitor.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct ages{
  int years;
  int months;
  int days;
};

void printAge(int year,int month,int day,int hour,int min,int sec);
struct ages myages;
int present_month,present_year,present_day,year,month,day,hour,min,sec;
void solve(void){
  if (present_day>=myages.days){
    day = present_day -myages.days;
    if (present_month>=myages.months){
      month= present_month-myages.months;
      year = present_year-myages.years;
      printAge(year,month,day,hour,min,sec);
      exit(1);
    }else{
      month=present_month+12-myages.months;
      year = present_year-myages.years-1;
      printAge(year,month,day,hour,min,sec);
      exit(1);
    }

  }else{
    //to do
    day =present_day+30-myages.days;
    if (present_month>=myages.months+1){
      month = present_month-myages.months-1;
      year=present_year-myages.years;

      printAge(year,month,day+1,hour,min,sec);
      exit(1);
    }else{
      // printf("Test\n" );
      month =present_month+12-myages.months-1;
      year=present_year-myages.years-1;
      printAge(year,month,day+1,hour,min,sec);
      exit(1);
    }
  }
}

int main(int argc, char const *argv[]) {
  // myages.years = 2001;
  // myages.months=7;
  // myages.days=15;
  printf("=======Enter Your date of birth=======\n" );
  printf("\n\n\ndays months years:");
  scanf("%d %d %d",&myages.days,&myages.months,&myages.years);
  time_t rawtime;
  struct tm *present_time;
  time( &rawtime );
  present_time = localtime( &rawtime );
  present_month=present_time->tm_mon+1;
  // present_month = 5;
  present_year = present_time->tm_year+1900;
  // present_year = 2019;
  // printf("%d\n",present_year );
  present_day = present_time-> tm_mday;
  hour = present_time->tm_hour;
  min=present_time->tm_min;
  sec=present_time->tm_sec;
  // present_day =2;
  solve();
  return 0;
}
void printAge(int year ,int month,int day,int hour,int min,int sec){
  printf("\n\n=========Calculated Ages===========\n" );
  printf("\n\n%d years %d months %d days %d hours %d mins %d sec\n",year,month,day,hour,min,sec);
}
