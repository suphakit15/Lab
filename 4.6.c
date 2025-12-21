#include<stdio.h>

int main() {
    int scores[5];
    int sum = 0;
    float average = 0.0;
    int above_average_count = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter score Student %d: ", i + 1); // ลูป แรก รับคะแนนนักเรียนเข้ามา 5 คน
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = (float)sum / 5; // วิธีหาค่าเฉลี่ย

    for (i = 0; i < 5; i++) {
        if (scores[i] > average) {
            above_average_count++;
        }
    }

    printf("\n--- STUDENT SCORE ANALYSIS REPORT ---\n");
    printf("Recorded Scores: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", sum);
    printf("Average Score: %.2f\n", average);
    printf("Number of Scores Above Average: %d\n", above_average_count);
}