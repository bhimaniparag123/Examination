#include <stdio.h>

int reverseNumber(int num) 
{
    if (num<100||num>999) 
	{
        printf("The number must be a 3-digit number.\n");
        return -1
    }

    int reversed=0;
    int original=num;
    while (num!=0) 
	{
        int digit=num%10;
        reversed = reversed*10+digit;
        num /= 10;
    }
    return reversed;
}

main() 
{
    int number;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    int reversed = reverseNumber(number);
    if (reversed != -1) 
	{
        printf("Reversed number: %d\n", reversed);
    }
}
