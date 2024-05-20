/*TNRN (Take Nothing, Return Nothing)
Question: Write a function to print a simple 3x3 matrix of asterisks.

Input Format: No input.
Output Format:

* * *
* * *
* * *

*/
#include<stdio.h>

void hello(){
    printf("3 x 3 matrix is:\n ");
    for(int i=1;i<=3;i++){
      for(int j=1;j<=3;j++){
        printf("*  ");
      }
      printf("\n ");
    }

}
int main(){
    hello();
    return 0;
}