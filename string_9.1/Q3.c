/*3. Write a Program to convert the given string in toggle case without using any string function.
For example,
Input:
Enter any string: HelLo worLD

Output:
Toggle case string: hELlO WORld*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\nProgram is convert the given string in toggle case without using any string function.\n\n");
    printf("Enter any string:- ");
    gets(str);
    printf("Toggle case string:- ");
    for(int i=0; str[i] != '\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            printf("%c",str[i]-32);
        }else if(str[i]>='A'&&str[i]<='Z'){
            printf("%c",str[i]+32);
        }else{
            printf("%c",str[i]);
        }
    }
    return 0;
}