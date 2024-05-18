/*Question: Write a function to print a 5x5 matrix of asterisks.
Input Format: None
Output Format: Print a 5x5 grid of asterisks (*)*/

#include<stdio.h>
void print(){
    
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        printf("*  ");
    }
    printf("\n");
}
}
int main(){
    print();
    return 0;
}