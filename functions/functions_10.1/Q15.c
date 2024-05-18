/*Question: Write a function to print the alphabet in reverse order.
Input Format: None
Output Format: Print Z, Y, X, ..., A on separate lines*/
#include<stdio.h>
void name(){
    for(char x='Z';x>='A';x--){
        printf("%c\n\n",x);

    }
}
int main(){
    name();
    return 0;
}