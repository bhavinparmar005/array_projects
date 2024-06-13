/*
1. Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/
#include<stdio.h>
#include<string.h>

int main(){

   char hello[50];

    printf("\nEnter any string:- ");
    gets(hello);

    int length=strlen(hello);

  int *ptr=&length;

    printf("\nThe length of a string is: %d",*ptr);

    return 0;

}