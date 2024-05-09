// Q.2 Write a Program to find the average of a 1D array.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 12
// a[1] = 42
// a[2] = 18
// a[3] = 50
// a[4] = 26
// 
// Output:
// Average of an Array: 29.6
#include<stdio.h>
int main(){
    int size;
    int sum=0;
    float avrage;
   
    printf("\n\nenter yourt number:- ");
    scanf("%d",&size);

    int a[size];
 
  
    for(int i=0; i<size; i++ ){
        printf("a[%d]= ",i);
       scanf("%d",&a[i]);
    

       sum+=a[i];
      
    }
    
     avrage=sum/size;


       printf("\n\nAverage of an Array:- %.2f",avrage);
      
}

