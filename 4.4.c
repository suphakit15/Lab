#include<stdio.h>
int main() {
    int numbers[5];
    int even_count = 0;
    int odd_count = 0;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter integer number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < 5; i++) {
        if(numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("\n--- NUMBER CLASSIFICATION REPORT ---\n");
    printf("recorded Numbers: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
    return 0;
}