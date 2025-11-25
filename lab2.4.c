#include<stdio.h>

int main() {
    float principal, monthlyPayment, Interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;


    if(scanf("%f %f", &principal, &monthlyPayment) != 2) {
        return 1;
    }

    while (principal > 0 && monthCount != 10) {
        monthCount++;
        Interest = principal * INTEREST_RATE;
        principal = principal + Interest;

        if(monthlyPayment < Interest) {
            principal = principal + PENALTY;
        }
        principal = principal - monthlyPayment;
        printf("Month %d: Remaining %.2f\n", monthCount, principal);
    }
    if(principal > 0 ) {
        printf("Loan settled morethan %d months. \n, monthCount");
    } else {
        printf("Loan settled in %d months. \n", monthCount);
    }
    
    return 0;

}