// 1. Write a Program to find the average of a given 2D array.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3
// 
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6
// 
// Output:
// Average of an Array: 3.88

#include<stdio.h>
int main()
{
    printf("\nProgram is find the average of a given 2D array.\n\n");

    int row,col;

    printf("Enter the array's row size:-  ");
    scanf("%d",&row);
    printf("Enter the array's column size:- ");
    scanf("%d",&col);

    int a[row][col];
    printf("\n\nEnter array's elements:\n");
      int sum=0;

    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
               sum +=a[i][j];
        }
    }
  
    double average = (double)sum / (row * col);
    printf("\nAverage of an Array:- %.2f\n\n",average);

    return 0;
}