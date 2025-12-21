#include<stdio.h>
int main() {
    int daily_temp[7];
    int max_temp;
    int i;


    for(i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%d", &daily_temp[i]);
    }
    
    max_temp = 0;

    for(i = 1; i < 7; i++) {   
        if(daily_temp[i] > max_temp) {
            max_temp = daily_temp[i];
        }
    }
    printf("\n--- DATLY TEMPERATURE REPORT ---\n");
    printf("Recorded Temperatures ( C ): ");
    for(i = 0; i < 7; i++) {
        printf("%d ", daily_temp[i]); //ปริ้นลูป เพื่อให้เห็นอุณหภูมิ
    }
    printf("\n");
    printf("Maximum temperature is: %d (C)\n", max_temp);

    if (max_temp > 35) {
        printf("Weather is HOT!");
    } else {
        printf("Weather is MODERATE!");
    }

    return 0;
}