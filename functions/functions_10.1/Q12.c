/*Question: Write a function to print the factorial of numbers from 1 to 5.
Input Format: None
Output Format: Print the factorials of 1, 2, 3, 4, 5*/

#include<stdio.h>
void hello(){
    int sum=1;
    for(int i=1;i<=5;i++){
        printf("%d\n",i);
        sum *=i;
    }
    printf("1 to 5 factorial is numbers :- %d ",sum);

}
int main(){
    hello();
    return 0;
}