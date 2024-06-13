#include<stdio.h>
#include<string.h>

int main(){
 

 FILE *ft;
 char a[100];
 ft=fopen("new.txt","a");
 if(ft==NULL){
    printf("you are so miis word");
 }else{
    printf("Enter your value:- ");
 gets(a);
 fputs(a,ft);
 fputs("\n",ft);
 fclose(ft);
 printf("you file add old file ");
 }
 



 }