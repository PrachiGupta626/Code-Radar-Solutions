#include <stdio.h>
int main(){
    int a,b;
    sacnf("%d" ,&a,b);
    b= ~a;
    printf("%d",&b);
    return 0;
}