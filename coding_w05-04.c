#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับข้อมูลของผู้ใช้ 3 คน
    char name[3];         // ชื่อเล่น (ตัวอักษร)
    int age[3];           // อายุ (จำนวนเต็ม)
    float height[3];      // ส่วนสูง (เมตร)
    float weight[3];      // น้ำหนัก (กิโลกรัม)
    char grade[3];        // รหัสเกรด (ตัวอักษร)

    // รับค่าข้อมูลจากผู้ใช้ 3 คน
    for(int i = 0; i < 3; i++) {
        printf("Enter data for person %d:\n", i + 1);
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงผลข้อมูล
    printf("\n------ Displaying Information ------\n");
    for(int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %c\n", name[i]);
        printf("Age: %d years\n", age[i]);
        printf("Height: %.1f m\n", height[i]);
        printf("Weight: %.1f kg\n", weight[i]);
        printf("Grade: %c\n\n", grade[i]);
    }

    return 0;
}