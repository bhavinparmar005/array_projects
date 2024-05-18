/*Question: Write a function to print the ASCII values of characters from 'a' to 'z'.
Input Format: None
Output Format: Print the characters and their ASCII values*/
#include<stdio.h>
 
void name(){
    for(char i='a';i<='z';i++){
        printf("%d\n",i);
    }

}
int main(){
    name();
    return 0;
}