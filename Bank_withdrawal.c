/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:4/10/2025
Description: withdrawing_in_bank
*/
#include <stdio.h>//scantf(),printf()
//main function 

int main(){
int amount;
int balance=5000; //start
printf("Your current balance is %d\n",balance);

while(balance>0) //stop
{
printf("Enter amount to withdraw\n");
scanf("%d",&amount);
balance=balance-amount; //step, balance = balance amount
printf("New balance %d\n",balance);
}
printf("Insufficient funds");
return 0;

}