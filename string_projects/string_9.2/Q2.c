/*2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char stru[]="bhavin005@gmail.com";
    char strp[]="363252";
    char str[20];
    char password[20];

    printf("\n Program is create a login mechanism by entering the right email & password. You can compare it with your desired email & password.\n\n");

    printf("Enter your email:- ");
    gets(str);
    printf("Enter your password:- ");
    gets(password);


    if( strcmp(stru,str) ==0 && strcmp(strp,password) ==0){
        printf("\n\nLogin Successful...\n");
    }else{
        printf("\n\nLogin Failed. Invalid Credentials.");
    }
    
    return 0;
}