#include <stdio.h>
int main(){
    float radius;
    printf("Enter radius");
    scanf("%d",&radius);
    float area= 3.14* radius* radius;
    printf("area is %.2f\n",area);
    return 0;
}