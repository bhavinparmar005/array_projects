// 3. Write a Program to find square of each element from the given array.
// For example,
// Input:
// Enter array size: 5
// 
// Enter array elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2
// 
// 
// Output:
// The squares are: 49, 16, 81, 25, 4



#include<stdio.h>
int main(){

    int size;
    printf("\nProgram is find square of each element from the given array\n");
    printf("\n\nEnter array size:- ");
    scanf("%d",&size);

    printf("\nEnter array elements:\n\n");
    int a[size];
    for(int i=0; i<size;i++){
    printf("a[%d]= ",i);
    scanf("%d",& a[i]); 
    }
    int sum[size];
     printf("\nthe squares are :-");
    for(int i=0;i<size;i++){
        sum[i]=a[i]*a[i];

         printf("%d  ",sum[i]);
    }

    return 0;
}