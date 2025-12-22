#include<stdio.h>

#define SIZE 5

int calculate_sum(int array[], int size);

int main() {
    int number[5];
    int total_sum;
    float average;
    int i;

    printf("Enter %d integer numbers:\n", 5);
    for (i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }

    total_sum = calculate_sum(number, 5);
    average = (float)total_sum / 5;

    printf("\n---ARRAY AVERAGE REPORT---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", number[i]);
    }   
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f\n", (float)total_sum / 5);
    return 0;
}
int calculate_sum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    return sum;
}