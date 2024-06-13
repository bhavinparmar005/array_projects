#include<stdio.h>
#include<string.h>

int main(){

    char hello[500];

    FILE *hi;

    hi=fopen("first_projects.txt","w");

    printf("Enter you any text:- ");

    fgets(hello,sizeof(hello),stdin);

    for(int i=0;i<strlen(hello);i++){
        fputc(hello[i],hi);
    }

    fclose(hi);

    return 0;
}