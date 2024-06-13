#include<stdio.h>
#include<string.h>
 struct car
 {
   char name[50];
   char color[50];
   int modal;
   float price;

 } maruti,audi,bmw;
  int main(){

    // maruti 
    printf("\ncompany name is :-maruti suzuki\n\n");

    strcpy(maruti.name,"swift");
    printf("car name is \t:-");
    printf("%s",maruti.name);

    printf("\ncar color is \t:-");
    strcpy(maruti.color,"red");
    printf("%s",maruti.color);

    printf("\ncar modal \t:-");
    maruti.modal=2018;
    printf("%d",maruti.modal);

    printf("\ncar price \t:-");
    maruti.price=19.5;
    printf("%f\n\n",maruti.price);

    // audi 
     printf("\ncompany name is :-audi\n\n");

    strcpy(audi.name,"Q6");
    printf("car name is \t:-");
    printf("%s",audi.name);

    printf("\ncar color is \t:-");
    strcpy(audi.color,"green");
    printf("%s",audi.color);

    printf("\ncar modal \t:-");
    audi.modal=2022;
    printf("%d",audi.modal);

    printf("\ncar price \t:-");
    audi.price=78.3;
    printf("%f\n\n",audi.price);
    
    // BMW 
     printf("\ncompany name is :-B M W\n\n");

    strcpy(bmw.name," BMW i7 M70");
    printf("car name is \t:-");
    printf("%s",bmw.name);

    printf("\ncar color is \t:-");
    strcpy(bmw.color,"white");
    printf("%s",bmw.color);

    printf("\ncar modal \t:-");
    bmw.modal=2024;
    printf("%d",bmw.modal);

    printf("\ncar price \t:-");
    bmw.price=90.6;
    printf("%f\n",bmw.price);

    printf("\nTHANK YOU");
}