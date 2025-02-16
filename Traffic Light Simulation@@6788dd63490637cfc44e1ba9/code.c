#include <stdio.h>
int main(){
    char a[2];
    scanf("%1s",a);
    if (a[0]==R) printf("Stop");
    else if(a[0]==G) printf("Go");
    else if(a[0]==Y) printf("Slow Down");
    else printf("Invalid");
    return 0;
}