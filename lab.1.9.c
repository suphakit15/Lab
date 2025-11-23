#include<stdio.h>

int main() {
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;

    if (scanf("%d %f", &zoneCode, &weight_kg) != 2 ){
        return 1;
    }
    switch (zoneCode)
    {
    case 1: // Local
        if (weight_kg <=5){
            printf("Cost 50 Baht");
        }else if (weight_kg >10)
        {
            printf("Cost 80 bath");
        }
        
        break;

    case 2: // Regional
        if ( weight_kg <=10){
            printf("Cost 150 Baht");
        }else if(weight_kg >10)
        {
            printf("Cost 250 Baht");
        }

        break;

    case 3:
        printf("Cost 500 Baht");
        break;
        
    
    default:
        printf("Incalid Zone Code ");
        break;
    }

    if (totalCost > 0.0 || zoneCode >3 || zoneCode <1 ){
        printf("%.2f\n", totalCost);
    }
    return 0;
}