/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:4/10/2025
Description: password
*/
#include<stdio.h>//scantf(),printf()

// main function
int main ()
 {
int password;//start

do
{
printf("enter password");
scanf("%d",&password);
}
while(password!=1234);
printf("Access granted");

return 0;
}