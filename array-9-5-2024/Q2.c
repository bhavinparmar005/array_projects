// 2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
// For example,
// Input:
// Enter the first number: 2020
// 
// Enter the second number: 2040
// 
// Output:
// The array is: 2020, 2024, 2028, 2032, 2036, 2040


#include<stdio.h>
int main(){

    int first_number;
    int second_number;

    printf("\n\nProgram is find leap years between two given numbers and store them in an array. And then print that array.\n\n");

    printf("Enter the first number:-  ");
    scanf("%d",& first_number);
    printf("\nEnter the second number:-  ");
    scanf("%d",&second_number);

    printf("\n\nThe array is:-");
    for(int i=first_number;i<=second_number;i++){
        if(i%4==0){
             printf("%d  ",i);
        }
       
    }
    
        return 0;
}