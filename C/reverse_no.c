//a program that prints the digits of a number in reverse

#include <stdio.h>
int reverse(int);
int main(void)
{
int input;
printf("Enter a number:");
scanf("%i", &input);
printf("Reversed: %i", reverse(input));
return 0;
}
int reverse(int num)
{
int reversed = 0, reminder;
while(num != 0)
{
reminder = num % 10;
reversed = 10 * reversed + reminder;
num /= 10;
}
return reversed;
}
