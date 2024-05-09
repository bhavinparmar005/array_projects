// 1 Write a Program to find the length of a 1D array.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 3
// a[1] = 7
// a[2] = 1
// a[3] = 8
// a[4] = 6

// Output:
// Length of an Array: 5

#include <stdio.h>
int main()
{
int size;



printf("\n\nprogram is find the length of a 1D array\n ");
printf("\n Enter array of size:- ");
scanf("%d",&size);


int a[size];

printf("\nEnter array elements\n");

for(int i=0; i<size;i++){
    printf("a[%d]= ",i);
    scanf("%d",&a[i]);
}
int langth=sizeof(a)/sizeof a[0];
printf("\n\n average of an array :-  %d",langth);


    return 0;
}
