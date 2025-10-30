/*
Name: Fidelis Njoki
Reg: CT100/G/26151/25
Des: totalRevenue and average_revenue
*/


#include<stdio.h>;
int main(){
int i;
int average_daily_revenue;
int weekly_revenue=0;
int revenue[7]={1000,1500,2000,2500,3000,3500,4000};


 //for(start;stop;step)
 
 for( i=0;i<7;i++)
 {
 weekly_revenue+=revenue[i];
 }
printf("The weekly_revenue is %d\n",weekly_revenue);

average_daily_revenue=weekly_revenue/7;

printf("The average_daily_revenue is %d\n",average_daily_revenue);


return 0;
}
    