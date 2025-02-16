#include <stdio.h>

int main(){
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);  // Corrected format specifier to %f
    float area = 3.14 * radius * radius;
    printf("Area is: %.2f\n", area);  // Corrected format specifier to %f and added precision
    return 0;
}
