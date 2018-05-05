#include<stdio.h>

int main(){

 float buy,sell;
 printf("Buy:");
 scanf("%f",&buy);

 printf("\nSell:");
 scanf("%f",&sell);

 if(sell>buy){
    printf("\nProfit: %0.3f",(sell-buy));
 }

 else if(sell<buy){
    printf("\nLoss: %0.3f",(buy-sell));
 }

 else{
    printf("\nNo Profit or Loss");
 }

 getch();
 return 0;

}
