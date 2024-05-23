/*1. Write a Program to find the reverse of a 1D array using a Chain of Pointers.
For example,
Input:
Enter the array's size: 5


Enter array elements:
a[0] = 5
a[1] = 9
a[2] = 4
a[3] = 7
a[4] = 3

Output:
Reversed array elements:
3, 7, 4, 9, 5
*/
#include<stdio.h>


void  hi(int *array,int *size){
       
    printf("\nReversed array elements:\n");

    for(int i=*size-1;i>=0;i--){

        printf("%d\n",array[i]);
    }
   
   
}
int main(){
    int size;
    printf("\nEnter the array's size:- ");
    scanf("%d",&size);
    int array[size];

    for(int i=0;i<size;i++){
        printf("a [%d] = ",i);
        scanf("%d",&array[i]);
    }
    hi(array,&size);
    
}