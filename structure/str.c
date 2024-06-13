#include<stdio.h>
#include<string.h>


int main(){
    struct{
    int id;
    char name [50];
    int age;
    int salary;
   }company;
    
    

    company.id=1;
    strcpy(company.name,"bhavin parmar");
    company.age = 23;
    company.salary=23000;

    printf(" %d  %s  %d  %d",company.id,company.name,company.age,company.salary);
    return 0;
}
