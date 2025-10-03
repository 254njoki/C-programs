/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:2/10/2025
Description: company charges
*/
#include<stdio.h> 
//main function 
int main (){
int choice;
//prompt the user to enter choice
printf("select data bundles\n");
printf("1. 100MB @ KES 50\n");
printf("2. 500MB @ KES 200\n");
printf("3. 1GB @ KES 350\n");
printf("4. 2GB @ KES 600\n");

//prompt the user to enter choice
printf("enter your choice (1-4)=");
scanf("%d",&choice);

//display data bundles
if(choice== 1) {
printf("You have selected 100MB for KES 50 \n");
}
else if(choice== 2) {
printf("You have selected 500MB for KES 200 \n");
}
else if(choice== 3) {
printf("You have selected 1GB for KES 350 \n");
}
else if(choice== 4) {
printf ("You have selected 2GB for KES 600 \n");
}
else {
printf("invalid choice");
}
return 0;
}
