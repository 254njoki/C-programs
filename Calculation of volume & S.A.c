/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:23/09/2025
Description: calculating volume and surface_area
*/
//pre processor directive 
#include<stdio.h>//scanf(),printf()

int main(){
//variable declaration& initialization 
int radius;
printf("Enter the radius:\n");
int height;
printf("Enter the height:\n");
float pi = 3.142;
int volume;
int surface_area;
volume = pi*radius*radius*height;
surface_area = 2*pi*radius*radius+2*radius*height;
printf("volume");
printf("surface_area");
return 0;
}