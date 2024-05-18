/*Question: Write a function to print the first 10 Fibonacci numbers.
Input Format: None
Output Format: Print the first 10 Fibonacci numbers on separate lines*/
#include<stdio.h>
void hello(){
    int a=0;
   int b=1;
   int c;
   printf("%d\n%d\n",a,b);
    for(int i=0;i<=10;i++){
        
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}
int main(){
    hello();
    return 0;
}