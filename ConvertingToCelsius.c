/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:16/10/2025
Description: program to convert Fahrenheit to celsius
*/

#include <stdio.h>//printed and scanf

float convertToCelcius(float Fahrenheit)
{
float Celcius;
Celcius=(Fahrenheit-32)*5/9;
return Celcius;
}
int main(){
float Fahrenheit;
float Celcius;

printf("Enter the temperature in Fahrenheit:");
scanf("%f",&Fahrenheit);

Celcius = convertToCelcius(Fahrenheit);
printf("The temperature in Celcius is: % .2f \n",Celcius);
scanf("%f",&Celcius);
return 0;
}