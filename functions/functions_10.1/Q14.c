/*Question: Write a function to print the sum of digits of the number 12345.
Input Format: None
Output Format: Print the sum, which is 15*/
#include<stdio.h>
void name(){
   int  sum=0;
    for (int i=1;i<=5;i++){
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("the sum of digits of the number:- %d",sum);

}
int main(){
    name();
    return  0;
}