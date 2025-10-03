/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:2/10/2025
Description: water bills
*/
#include<stdio.h> 
//main function 
int main(){
int units;
float bill;

//prompt the user to enter units
printf("enter units,\n");
scanf("%d",&units);

if(units<=30){
bill= units * 20;
}
else if(units<=60){
bill= units * 25;
}
else{bill= units * 30;
}

printf(" total water bill:%.2f KES\n",bill);

return 0;
}
