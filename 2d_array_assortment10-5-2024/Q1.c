// 1. Write a Program to find all the negative elements from a given 1D array.
// For example,
// Input:
// Enter the array's size: 5
// 
// Enter array's elements:
// a[0] = 2
// a[1] = -4
// a[2] = 1
// a[3] = -3
// a[4] = -5
// 
// Output:
// Negative elements from an Array: -4, -3, -5.

#include<stdio.h>
int main(){

    printf("\n\nProgram is find all the negative elements from a given 1D array.\n");

    int size;
    printf("\nEnter the array's size:-  ");
    scanf("%d",&size);

    int a[size];
    printf("\nEnter array's elements:\n\n");

    for(int i=0;i<size;i++){
        printf("a [%d] = ",i);
        scanf("%d",&a[i]);
    }

  

    printf("\nNegative elements from an Array:-  ");

    for(int i=0;i<size;i++){
        if(a[i]<0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}