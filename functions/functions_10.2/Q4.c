/*TNRN (Take Nothing, Return Nothing)
Question: Write a function to print the factorial of numbers from 1 to 5.

Input Format: No input.
Output Format: Factorials of numbers from 1 to 5.
*/

#include<stdio.h>

void hello(){
    printf("1 to 5 factorials number is :- ");
    int sum=1;
    for(int i=1;i<=5;i++){
       sum *=i;
       }
     printf("%d \n",sum);

}
int main(){
    hello();
    return 0;
}