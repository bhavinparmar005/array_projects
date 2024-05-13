//2. Write a Program to find the largest element from a given 2D array.
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
// The largest element is: 9

#include<stdio.h>
int main()
{
    int row_size,col_size;

    printf("\n\nProgram is find the largest element from a given 2D array.\n\n");
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
        // printf("\n");
    }

    printf("\nThe largest element is:");

    int max=0;

    for(int i=0; i<row_size;i++){
        for(int j=0; j<col_size;j++){

            if(a[i][j]>0){
                max=a[j][i];
            }
        }
        
    }
    printf("%d",max);
    return 0;

    
}
