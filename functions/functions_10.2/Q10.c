/*TSRN (Take Something, Return Nothing
Question: Write a function to print all the vowels in a given string.

Input Format: Enter a string.
Output Format: The vowels in the string.
 abcdefghijklmnopqrstuvwxyz
*/
#include<stdio.h>
#include<string.h>
void hello(char a[]){
    char i;
    for( i= 0;a[i]!='\0';i++){
        char b=a[i];
        if( b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
            printf("%c ",b);
        }

       
    }
 
}  
int main(){
    char a[50];
    printf("Enter a string:- ");
    gets(a);

    hello(a);
    return 0;

}