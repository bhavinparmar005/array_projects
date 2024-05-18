/*Question: Write a function to print the reverse of the string "Hello".
Input Format: None
Output Format: Print "olleH"*/
#include<stdio.h>
#include<string.h>
void reverse(){
    char a[]="HELLO";
  int   lentgh=strlen(a);
 
    for(int i=lentgh-1;i>=0;i--){
        printf("%c",a[i]);
    }
}
int main(){
    reverse();
    return 0;
}