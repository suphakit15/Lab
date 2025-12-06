#include<stdio.h>

struct SalesRecord
{
    char name[50];
    float target;
    float actual;
};

int main() {
    int N, i;
    float baseCommission ;
    float grandTotalCommission = 0.0;

    if (scanf("%d",&N) != 1) {
        return 1;
    }
    struct SalesRecord records[N];
    

    for ( i = 0; i < N; i++)
    {
        if(scanf("%f %f %s", &records[i].target, &records[i].actual,&records[i].name) != 3) {
            return 1;
        }

        baseCommission = records[i].actual * 0.10;

        if (records[i].actual >= records[i].target * 1.20)
        {
            baseCommission += 200;
        }else if (records[i].actual >= records[i].target)
        {
            baseCommission += 50;
        }else if (records[i].actual < records[i].target * 0.90)
        {
            baseCommission -= 100;
        }
        
        grandTotalCommission += baseCommission;
    
    }

    printf("Grand Total Commission: %.2f\n",grandTotalCommission);
    return 0;
    
}
