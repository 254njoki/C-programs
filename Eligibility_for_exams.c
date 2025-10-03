/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:2/10/2025
Description: check students exam eligibility 
*/
#include<stdio.h>//scantf(),printf()

// main function 
int main () {
int attendance;
float marks;

//prompt the user to enter attendance
printf("Enter attendance \n");
scanf("%d",&attendance);

//prompt the user to enter marks
printf("Enter marks \n");
scanf("%f",&marks);

if(attendance >=75 && marks>=40 ){
printf("Eligible for final exam");
}
else {
printf("Not eligible for final exams");
}

return 0;
}
