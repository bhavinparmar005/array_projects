/*2. Write a Program to convert the given string in lowercase without using any string function.
For example,
Input:
Enter any string: HELLO WORLD

Output:
Lowercase string: hello world*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("\n Program is convert the given string in lowercase without using any string function.\n");
    printf("\nEnter any string:- ");
    gets(str);

    printf("Lowercase string:-  ");
    for (int i=0;str[i] !='\0';i++){
        if(str[i]>='A'&& str[i]<='Z'){
            printf("%c",str[i]+32);
        }else{
            printf(" ");
        }
    }
    return 0;
}