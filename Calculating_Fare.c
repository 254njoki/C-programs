/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:16/10/2025
Description: Calculating_fare;
*/

#include <stdio.h>
float calculateFare(int distance)
{
float fare;
 fare = distance*50;
 return fare;
 }
 int main(){
 float distance;
 float totalfare;
 
printf("Enter the distance\n:");
scanf("%f",&distance);

totalfare = calculateFare(distance);

printf("The totalFare is: %f ksh\n",totalfare);

return 0;
}