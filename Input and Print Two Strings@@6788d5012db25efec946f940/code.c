#include <stdio.h>

int main() {
    char a[100];
    char b[200];
    sacnf("%s %s",&a,&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}