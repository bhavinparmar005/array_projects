/*1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.For example,
Input:
Create your password: Admin@123

Output:
Your password is Strong.

-----------------------------------------

For example,
Input:
Create your password: hello#89

Output:
Your password is not Strong.*/

#include<stdio.h>
#include<string.h>
int main(){


    int length;
    int lowercase=0;
    int upercase=0;
    int digit=0;
    int specialchar=0;
    char str[15];

    printf("\n\nProgram is check if a given password is strong or not by satisfying the below criteria:\n");
    printf("- Password must contain at least one letter, one digit & one special symbol.\n");
    printf("- Password must be at least 6 characters.\n");
    printf("\nCreate your password:- ");
    gets(str);

    // lenth

    length=strlen(str);

    // letter

    // upcase

    for (int g=0;str[g]!='\0';g++){
        if(str[g]>='A'&&str[g]<='Z'){
            upercase++;
        }
    }

    // Lowercase

    for (int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            lowercase++;
        }
    }

    // digit

    for(int j=0; str[j]!='\0';j++){
        if(str[j] >= 48 && str[j] <= 57) {
            digit++;
        }
    }

    // Special charaters

    for(int k=0; str[k]!='\0'; k++) {
        if(str[k]>=33 && str[k]<=47 || str[k]>=58 && str[k]<=64 || str[k]>=125 && str[k]<=126) {
            specialchar++;
        }
    }

    if(length >= 6 && lowercase > 0 && upercase > 0 && digit > 0 && specialchar > 0) {
        printf("\nYour password is strong.\n\n");
    }
    else {
        printf("\nYour password is not strong.\n\n");
    }
    
    return 0;
}