/*TSRS (Take Something, Return Something)
Question: Write a function to return whether a given number is even or odd.

Input Format: Enter a number.
Output Format: The number is even or odd.
*/
#include<stdio.h>
int chek(int number){

   
         if(number %2==0){
            printf("The number is even");
         }else{
            printf("The number is odd");
         }
    
    return number;

}
int main(){
    int number;
    printf("Enter a number:- ");
    scanf("%d",&number);
    printf("\n",(chek(number)));
    
    return 0;
}