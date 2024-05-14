/*1.Write a Program to convert the given string in uppercase without using any string function.
For example,
Input:
Enter any string: hello world

Output:
Uppercase string: HELLO WORLD
*/
#include<stdio.h>
#include<string.h>
int main()
{
      char str[100]; 
    printf("\nProgram to convert the given string in uppercase without using any string function.\n");

    printf("\nEnter any string:-  ");
    gets(str);
  
    printf("Uppercase string:-  ");
    for(int i=0;str[i] !='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            printf("%c",str[i]-32);
        }else{
            printf(" ");
        }
    }
    return 0;
}