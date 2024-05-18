/*
1. Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,
Input:
Enter any string: hello

Output:
Given string is not a Palindrome.
*/
#include<stdio.h>
#include<string.h>
int main()
{   
    char name_one[50];
    char name_two[50];
    printf("\n\nProgram ischeck whether a string is a palindrome or not without using string functions.\n");
    printf("\nEnter any string: ");
    gets(name_one);

    int lenth=strlen(name_one);
    int p=0;

    for(int i=lenth-1; i>=0; i--) {
        name_two[p]=name_one[i];
        p++;
    }
    name_two[p] = '\0';
    
    /
    int lenth_s=strlen(name_two);

    int compare=strcmp(name_one,name_two);
    if(compare==0) {
        printf("\nGiven string is a Palindrome.");
    }
    else {
        printf("\nGiven string is not a Palindrome.");
    }

    return 0;

}