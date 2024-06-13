#include<stdio.h>
enum month{
  JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER,OCTOBER ,NOVEMBER, DECEMBER
};

int main(){
  enum month hello;

  hello=JUNE;
  switch(hello){
 
    case JANUARY:
    printf("this month is january");
    break;

    case FEBRUARY:
    printf("this month is february");
    break;

     case MARCH:
    printf("this month is march");
    break;

    case APRIL:
    printf("this month is april");
    break;

    case MAY:
    printf("this month is may");
    break;

    case JUNE:
    printf("this month is june");
    break;

    case JULY:
    printf("this month is july");
    break;

    
    case AUGUST:
    printf("this month is august");
    break;

    case SEPTEMBER:
    printf("this month is september");
    break;

    case OCTOBER:
    printf("this month is october");
    break;

    case NOVEMBER:
    printf("this month is november");
    break;

    case DECEMBER:
    printf("this month is december");
    break;

  }
}