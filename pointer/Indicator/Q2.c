/*
2. Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
27  8
125 64
*/

#include<stdio.h>
void luli(int *a ){

        printf("%d\n",(*a)*(*a)*(*a));
    

}
int main(){
    int size;

    printf("Enter array's size :- ");
    scanf("%d",&size);
    int a[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("a [%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
           
        }
    }

     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            luli(&a[i][j]);
           
        }
    }

  
}