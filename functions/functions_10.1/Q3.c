/*Question: Write a function to print the even numbers from 1 to 20.
Input Format: None
Output Format: Print even numbers 2, 4, 6, ..., 20 on separate lines*/
#include<stdio.h>
void number(){
    for(int i=1; i<=20;i++){
        if(i%2==0){
            printf("\n%d",i);
        }
    }
}
int main(){
    number();
    return 0;
}