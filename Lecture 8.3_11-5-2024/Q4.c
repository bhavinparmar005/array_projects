/*4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
For example,
Input:
Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[0][3] = 6
a[0][4] = 3
a[1][0] = 9
a[1][1] = 5
a[1][2] = 4
a[1][3] = 6
a[1][4] = 7
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
a[2][3] = 3
a[2][4] = 5
a[3][0] = 3
a[3][1] = 4
a[3][2] = 8
a[3][3] = 5
a[3][4] = 1
a[4][0] = 2
a[4][1] = 3
a[4][2] = 9
a[4][3] = 5
a[4][4] = 7

Output:
2 4 1 6 3
9       7
8       5
3       1
2 3 9 5 7

The sum of boundary elements of an Array: 75
*/
#include<stdio.h>
int main()
{
    int size;
    printf("\nProgram is print and find the sum of all boundary elements from a given 5x5 2D array.\n");
    printf("\nEnter the array's row & column size:- ");
    scanf("%d",&size);

    int a[size][size];
    
    printf("\nEnter array's elements:\n\n");

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;

    printf("\nOutput:\n");

        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
              if(i==0||i==size-1||j==0||j==size-1){
                printf("%d ",a[i][j]);
                sum +=a[i][j];
              }else{
                printf("  ");
              }
          }
          printf("\n");
        }
        printf("\n\nThe sum of boundary elements of an Array: %d",sum);

    


    return 0;
}