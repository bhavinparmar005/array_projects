// 1. Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
// For example,
// Input:
// Enter array A's size: 5

// Enter array A's elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2

// Enter array B's size: 3

// Enter array B's elements:
// b[0] = 1
// b[1] = 3
// b[2] = 6

// Output:
// Array C is: 7, 4, 9, 5, 2, 1, 3, 6


#include<stdio.h>
int main(){

    printf(" \nProgram is perform the merge operation of two 1D arrays & store it in another array.\n");
    int sizeA;
    printf("\nEnter array A's size:- ");
    scanf("%d",&sizeA);
    int a[sizeA];
    for(int i=0; i<sizeA;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    int sizeB;
    printf("\nEnter arry B's size:- ");
    scanf("%d",&sizeB);

    int b[sizeB];
    for(int i=0; i<sizeB;i++){
        printf("b[%d]= ",i);
        scanf("%d",&b[i]);
    }

    printf("\n\narray C is :- ");
     int z=0;
     int sizeC[sizeA+sizeB];
    
    for(int i=0;i<sizeA;i++){
        sizeC[z]= a[i];
        z++;
        
    }
    for(int i=0;i<sizeB;i++){
        sizeC[z]=b[i];
        z++;
    }
    for(int i=0;i<z;i++){
        printf("%d ",sizeC[i]);
    }
   
    return 0;
    
}