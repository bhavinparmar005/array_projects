/*TSRN (Take Something, Return Nothing
Question: Write a function to print the length of a given string.

Input Format: Enter a string.
Output Format: The length of the string
*/

#include<stdio.h>
#include<string.h>

void hello(char str[]){
    int lenght=strlen(str);
    printf("The length of the string :- %d",lenght);

}
int main(){

    char str[100];
    printf("Enter a string:- ");
    gets(str);

    hello(str);
    return 0;
}