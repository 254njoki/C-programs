/*
Author: Fidelis Njoki
Reg no:CT100/G/26151/25
Date:5/10/2025
Description: Number_guessing_game
*/
#include <stdio.h>

int main()
{
//Number_Guesssing_Game

srand(time(NULL));

int guess = 0;
int tries = 0;
int min = 1;
int max = 20;
int answer = (rand() % (max - min + 1)) + min;

printf("**NUMBER GUESSING GAME**\n");

do{
printf("guess a number between %d - %d: ", min, max);
scanf("%d",&guess);
tries++;

 if(guess > answer){
 printf("Too high!\n");
 }
 else if(guess < answer){
 printf("Too low!\n");
 }
 else{
 printf("Congratulations!\n");
 }

}while(guess != answer);

printf("The answer is %d\n", answer);
printf("It took you %d tries",tries);

return 0;

}