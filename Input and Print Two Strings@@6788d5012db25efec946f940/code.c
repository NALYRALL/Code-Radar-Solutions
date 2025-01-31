#include<stdio.h>
#include<string.h>

int main (){
    char a[100];
    scanf("%99[^n]",a);
    char *split =strtok(a," ");
    while (split != NULL ){
        printf("%s ", split );
        split = strtok(NULL ," ");
        if (split != NULL){
            printf("and ");

        }
    }
    return 0;
}