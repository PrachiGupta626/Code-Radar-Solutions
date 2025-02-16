#include <stdio.h>
int main(){
    char a[2];
    scanf("%1s",a);
    if (a[0]=='R') printf("Stop\n");
    else if(a[0]=='G') printf("Go\n");
    else if(a[0]=='Y') printf("Slow Down\n");
    else printf("Invalid input\n");
    return 0;
}