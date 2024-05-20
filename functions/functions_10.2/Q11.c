/*TSRS (Take Something, Return Something)
Question: Write a function to return the square of a given number.

Input Format: Enter a number.
Output Format: The square of the given number.
*/
#include<stdio.h>
int square(int number){
    return number*number;

}
int main(){
    int number;
    printf("Enter a number:- ");
    scanf("%d",&number);
    printf("The square of the given number is:-  %d",(square(number)));
    
    return 0;
}