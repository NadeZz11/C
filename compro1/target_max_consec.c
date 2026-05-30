#include <stdio.h>

int main() {
    int target;
    scanf("%d", &target); // อ่านเลขที่สนใจ

    int num;
    int max_streak = 0;   // ความยาวสูงสุดของการติดกัน
    int current_streak = 0;
    int total_count = 0;  // รวมจำนวนทั้งหมดที่ตรงกับ target
    int is_first = 1;     // ไว้เช็คว่าเป็นตัวแรกที่ป้อนเข้ามาหรือเปล่า

    while (1) {
        scanf("%d", &num);
        if (num == 0) break; // จบการรับข้อมูล

        if (num == target) {
            total_count++;
            if (!(is_first && num == target)) {
                // ถ้าไม่ใช่ตัวแรกที่เป็น target ให้เริ่มนับ streak
                current_streak++;
                if (current_streak > max_streak) {
                    max_streak = current_streak;
                }
            }
        } else {
            current_streak = 0; // รีเซ็ตเมื่อไม่ตรงกับ target
        }

        is_first = 0;
    }

    printf("%d\n%d\n", max_streak, total_count);
    return 0;
}

