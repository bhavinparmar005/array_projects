/*Question: Write a function to print all uppercase letters.
Input Format: None
Output Format: Print A, B, C, ..., Z on separate lines*/
#include<stdio.h>
void hello(){
    char i;
    for(i='A';i<='Z';i++){
        printf("%c\n",i);
    }
}
int main(){
    hello();
}