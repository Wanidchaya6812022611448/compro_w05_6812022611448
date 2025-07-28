#include <stdio.h>

int main() {
    // ประกาศตัวแปร name เป็นตัวอักษร
    char name = 'J';
    
    // ประกาศตัวแปร age เป็นจำนวนเต็ม
    int age = 20;
    
    // ประกาศตัวแปร weight เป็นเลขทศนิยม
    float weight = 55.5;

    // แสดงผลออกทางหน้าจอ 2 บรรทัด
    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}