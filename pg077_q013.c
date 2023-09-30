#include <stdio.h>

int main (){
  int month;
  printf("Enter the month number");
  scanf("%d",&month);
  if(month==1)
    printf("January is the month.");
  if(month==2)
    printf("February is the month.");
  if(month==3)
    printf("March is the month.");
  if(month==4)
    printf("April is the month.");
  if(month==5)
    printf("May is the month.");
  if(month==6)
    printf("June is the month.");
  if(month==7)
    printf("July is the month.");
  if(month==8)
    printf("August is the month.");
  if(month==9)
    printf("September is the month.");
  if(month==10)
    printf("October is the month.");
  if(month==11)
    printf("November is the month.");
  if(month==12)
    printf("December is the month.");
  else
    printf("Invalid");
  return 0;
}
