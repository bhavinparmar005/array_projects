//3. Write a Program to find the transpose matrix of a given 2D array.
// For example,
// Input:
// Enter the array's row & column size: 3
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
// The transpose matrix of an array:
// 2 3 8
// 4 5 2
// 1 4 6

#include<stdio.h>
int main()
{
    int size;
    
    printf("\nProgram is find the transpose matrix of a given 2D array.\n");

    printf("\nEnter the array's row & column size:-  ");
    scanf("%d",&size);

    int a[size][size];
    int i,j;
 
    for( i=0;i<size;i++){

        for( j=0;j<size;j++){
            printf("a [%d] [%d] =  ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("The transpose matrix of an array:-  \n");
    for( i=0;i<size;i++){

        for( j=0;j<size;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }



    return 0;

    
}