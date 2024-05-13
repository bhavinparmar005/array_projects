//4. Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3
// 
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6
// 
// Output:
// Enter row number: 0
// Elements of row 0: 2, 7, 1
// The sum of a row 0: 10
// 
// Enter column number: 2
// Elements of column 2: 1, 4, 6
// The sum of column 2: 11

#include<stdio.h>
int main()
{
    int row_size,col_size;

    printf("\n\nProgram is print and find the sum of all elements of a given row & column from a 2D array.\n\n");
    printf("Enter the array's row size:");
    scanf("%d",&row_size);
    printf("Enter the array's column size:");
    scanf("%d",&col_size);

    int a[row_size][col_size];

    printf("\nEnter array's elements:\n\n");

    for(int i=0; i<row_size;i++){
        for(int j=0; j<col_size;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    
    }

       for(int i=0; i<row_size;i++){
        for(int j=0; j<col_size;j++){
        
        printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
 
    int row;

    printf("\n\nEnter row number: ");
    scanf("%d",&row);
    printf("Elements of row %d: ",row);
    for(int j=0;j<col_size;j++){
        printf("%d ",a[row][j]);
    }
    int row_sum=0;
    for(int j=0; j<col_size;j++){
        row_sum +=a[row][j];
    }
    printf("\nThe sum of a row %d : %d",row,row_sum);
    
     int col;

    printf("\n\nEnter col number: ");
    scanf("%d",&col);
    printf("Elements of col %d: ",col);
    for(int i=0;i<row_size;i++){
        printf("%d ",a[i][col]);
    }
    int col_sum=0;
    for(int i=0; i<row_size;i++){
        col_sum +=a[i][col];
    }
    printf("\nThe sum of a col %d : %d",col,col_sum);

 return 0;
}