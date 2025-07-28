#include <stdio.h>

int main() {
    char name[31];       // name (string, max 30 chars + null terminator)
    int age;
    float height;

    char subject[21];    // subject name (string, max 20 chars)
    float grade;
    char symbol;

    // Input line 1: name, age, height
    scanf("%s %d %f", name, &age, &height);

    // Input line 2: subject, grade, symbol
    scanf("%s %f %c", subject, &grade, &symbol);

    // Output 2 sentences
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %s, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}