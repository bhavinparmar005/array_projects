/*
2. Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/

#include<stdio.h>
#include<string.h>
int main()
{   char hello[30];
    char output;
    int count=0; 

    printf("\nProgram is count the frequency of each character in a given string.\n");
    printf("\nEnter any string: ");
    gets(hello);

    for( output='a';output<='z';output++)
    {
       count=0;
     for(int i=0;hello[i]!='\0';i++){
           
            if(output==hello[i])
            count++;
        }
     
        if(count>0){
            printf("%c => %d \n",output,count);
        }                           
    }
    
    return 0;
    

}