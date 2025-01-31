#include<stdio.h>
int main (){
    char a[];
    scanf("%s",&a);
    char *split = strsplit(a," ");
    while (token != null) {
        printf("%s\n",split);
        split = strsplit(null , " ");
    }
    return 0;
}