/*TNRS (Take Nothing, Return Something)

Question: Write a function to return the sum of the first 10 natural numbers.
Input Format: No input.
Output Format: 55
*/
#include<stdio.h>

int number(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum +=i;

    }
   return sum;
}

int main(){
    

    printf("%d",number());

    

}