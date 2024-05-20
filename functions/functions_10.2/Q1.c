/*TNRN (Take Nothing, Return Nothing)
Question: Write a function to print the first 10 odd numbers.

Input Format: No input.
Output Format: 1 3 5 7 9 11 13 15 17 19*/
#include<stdio.h>

void hello(){
    printf("10 odd number is:- ");
    for(int i=1;i<=20;i++){
        if(i%2 !=0){
            printf("%d  ",i);
        }
    }

}
int main(){
    hello();
    return 0;
}