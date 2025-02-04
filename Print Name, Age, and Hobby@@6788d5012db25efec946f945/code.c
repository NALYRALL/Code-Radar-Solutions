#include <stdio.h>

int main(){
    char a[20];
    int b;
    char c[20];
    scanf("%19s %d %19s",&a,&b,&c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}