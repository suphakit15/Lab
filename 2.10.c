#include <stdio.h>

int main() {
    int N_PERIODS, cmdCode, i;
    float initialBalance, PENALTY_FEE, amount;
    float currentBalance, APR, interest;
    float totalPenalties;

    if (scanf("%f %f %d", &initialBalance, &PENALTY_FEE, &N_PERIODS) != 3) {
        return 1;
    }
    currentBalance = initialBalance;

    printf("Starting Balance: %.2f\n", initialBalance);

    for ( i = 1; i <= N_PERIODS; i++) {
        if (scanf("%d %f", &cmdCode, &amount) != 2)
        {
            break;
        }
        switch (cmdCode)
        {
        case 1:
            currentBalance = currentBalance + amount;
            printf("---Month %d ---\n Deposit %.2f\n", i ,amount);
            break;
        case 2:
            if (amount <= currentBalance) {
                currentBalance = currentBalance - amount;
                printf("---Month %d ---\nWithdrawal: %.2f\n",i, amount);
            } else {
                totalPenalties = totalPenalties + PENALTY_FEE;
                printf("---Month %d ---\n WITHDRAWAL FAILED. Penalty %.2f applied\n", i, PENALTY_FEE);
            }
            break;
        case 3:
            if (currentBalance < 1000) {
                APR = 0.01;
            }else if( currentBalance >= 1000){
                APR = 0.025;
            }
            interest = currentBalance * (APR / 12.0);
            currentBalance = currentBalance + interest;
            printf("---Month %d ---\n Interest: %.2f (Rate: %.2f %%)\n", i, interest, APR);
            break;
            
        default:
            printf("Error : Invalid Command.\n");
            break;
        }
    }

    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);
    return 0;
}