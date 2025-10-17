/*
Author: Fidelis Njoki
Reg:CT100/G/26151/25
Date:16/10/2025
Description: CalculatingElecricBills
*/

#include <stdio.h>

int first100(int units) {
int total_bill = units * 10;
return total_bill;
}

int next100(int units) {
int total_bill = units * 15;
return total_bill;
}

int above200(int units) {
int total_bill = units * 20;
return total_bill;
}

int calculate_bill(int units) {
int total_bill = 0;

if (units <= 100) {
total_bill = first100(units);
}
else if (units <= 200) {
total_bill = first100(100) + next100(units - 100);
}
else {
total_bill = first100(100) + next100(100) + above200(units - 200);
}

return total_bill;
}

int main() {
int units;
printf("Enter number of units consumed: ");
scanf("%d", &units);

if (units < 0) {
printf("Units cannot be negative!\n");
return 1;
}

int total = calculate_bill(units);
printf("Total bill amount: sh%d\n", total);

return 0;
}