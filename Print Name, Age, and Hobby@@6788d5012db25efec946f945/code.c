#include <stdio.h>


int main() {
    char name[50], hobby[50];
    int age;
    scanf("%c", &name);
    scanf("%d", &age);
    scanf("%c", &hobby);
    printf("Name: %c\n Age: %d\n Hobby:%c\n", name, age, hobby);
    
    return 0;
}