#include<stdio.h>
int main() {
    int customerType;
    float consumption_kWh;
    float  price , totalBill = 0.0;
    
    
    if (scanf("%d %f", &customerType, &consumption_kWh) != 2) {
        return 1; 
    }if (customerType == 1 ){
        if (consumption_kWh <100){
            price = 3.0;
        }else {
            price = 4.0 ;
        }totalBill = consumption_kWh * price ;
    }else if  (customerType ==2){
        if (consumption_kWh <500){
            price = 5.0;
        }else {
            price = 6.5; 
        }totalBill = consumption_kWh * price;
    }

    if (totalBill > 0.0 || customerType == 2) { 
        printf("%.2f\n", totalBill);
        
    }else{
        printf ("Invalid Customer Type");
    }
    return 0;
}