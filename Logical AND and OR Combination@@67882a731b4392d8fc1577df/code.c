#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if (a==0 && b==0){
        printf("True");
    }
    else if(a>=0 || b<=0){
        printf("True");
    }
      else{
        printf("False");
   vv }

    return 0;
}