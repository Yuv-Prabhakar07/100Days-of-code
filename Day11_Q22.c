//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main() {
    float CP;
    float SP;
    float profit,loss;
    float profit_percentage,loss_percentage;

    printf(" Enter Cost price and Selling price respectively : ");
    scanf("%f %f", &CP, &SP);

   profit = SP - CP;
    profit_percentage = (profit/CP) * 100;

    loss = CP - SP;
    loss_percentage = (loss/CP) * 100;
   
    if(SP == CP){
        printf(" No profit no loss ");
    }else if(SP > CP){
        printf(" The profit is : %.2f\n The profit percentage is : %.2f\n", profit, profit_percentage);
    } else {
        printf(" The loss is : %.2f\n The loss percentage is : %.2f\n", loss, loss_percentage);

    }
    
 return 0;

}