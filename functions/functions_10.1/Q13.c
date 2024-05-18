/*Question: Write a function to print the square of numbers from 1 to 10.
Input Format: None
Output Format: Print the squares of numbers 1 to 10*/
#include<stdio.h>
void hello(){
    int i;
    int sum=1;
    for(i=1;i<=10;i++){
        sum=i*i;
        printf("%d X %d = %d\n",i,i,sum);

    }
}
int main(){
    hello();
}