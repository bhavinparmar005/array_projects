/*TSRN (Take Something, Return Nothing
Question: Write a function to print the reverse of a given string.

Input Format: Enter a string.
Output Format: The reverse of the given string.
*/
#include<stdio.h>
#include<string.h>

void hello(char a[]){
    int lenght= strlen(a);
    for(char i=lenght-1;i>=0;i--){
        printf("%c",a[i]);
    }


}
int main(){
    char a[50];
    printf("Enter a string:- ");
    gets(a);

    hello(a);
    return 0;
}