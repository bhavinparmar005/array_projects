/*TNRN (Take Nothing, Return Nothing)
Question: Write a function to print the sum of the squares of the first 10 natural numbers.

Input Format: No input.
Output Format: Sum of the squares of the first 10 natural numbers.
*/

#include<stdio.h>

void hello(){
    printf("sum squares of first 10 nutural number is:- ");
    int squares=1;
    int max=0;
    for(int i=1;i<=10;i++){
        squares=i*i;
        max+=squares;
    }

    printf("%d",max);

}
int main(){
    hello();
    return 0;
}