/*TSRS (Take Something, Return Something)
Question: Write a function to return the factorial of a given number.

Input Format: Enter a number.
Output Format: The factorial of the given number.
*/

#include<stdio.h>
int fac(int number){
    int sum=1;
    for(int i=1;i<=number;i++){
         sum *=i;
    }
    return sum;

}
int main(){
    int number;
    printf("Enter a number:- ");
    scanf("%d",&number);
    printf("The factorial is given number is:-  %d",(fac(number)));
    
    return 0;
}