/*TNRN (Take Nothing, Return Nothing)
Question: Write a function to print all prime numbers between 1 and 50.

Input Format: No input.
Output Format: Prime numbers between 1 and 50.
*/

#include<stdio.h>

void hello(){
    int count=0;
    int i;
       for( i=1;i<=50;i++){
       if(i%i==0){
        count++;
       }
         if(count==2){
        printf("%d",i);
       }
   
   
       }
     
    }


int main(){
    hello();
    return 0;
}