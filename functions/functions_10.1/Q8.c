/*Question: Write a function to print the multiplication table of 5.
Input Format: None
Output Format: Print the multiplication table of 5 up to 10*/

#include<stdio.h>
void hello(){
    int a;
    int i;
    int sum=1;
    printf("\nenter any number give multiplication of table:- ");
    scanf("%d",&a);

     for(int i=1;i<=10;i++){
        
         sum =a*i;
         printf("%d X %d = %d\n",a,i,sum);
        
    }
}
int main(){
    hello();
    return 0;
}