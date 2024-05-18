/*Question: Write a function to print the sum of the first 10 natural numbers.
Input Format: None
Output Format: Print the sum, which is 55*/

#include<stdio.h>

void sum(){
    int sum=0;
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
        sum +=i;
        
    }
    printf("sum of the first 10 natural numbers is:- %d",sum);
   
   

}
int main(){
    sum();
    return 0;
}