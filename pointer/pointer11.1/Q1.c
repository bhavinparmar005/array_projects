/*.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
For example,
Input:
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = 4
a[2] = 1
a[3] = 3
a[4] = 7

Output:
Square of each element:
4, 16, 1, 9, 49
*/
 #include<stdio.h>
  void  square(int *array,int *size){

    for(int i=0;i<*size;i++){
        array[i]=array[i]*array[i];
    }

 }

 int main(){
    int size;
    printf("\nEnter array's size:- ");
    scanf("%d",&size);
    int array[size];

    printf("Enter array's element:\n");

    for(int i=0;i<size;i++){
        printf(" a [%d] = ",i);
        scanf("%d",&array[i]);
    }

     square(array,&size );
     printf("\nSquare of each element:\n");
     for(int i=0;i<size;i++){
        printf("%d  ",array[i]);
     }



    return 0;
 }