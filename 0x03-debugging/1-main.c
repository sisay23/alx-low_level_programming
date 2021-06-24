#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n"); //this is warning

        i = 0;

        while (i < 10)
        {
                putchar(i); //this part of the code causing the output to go into an infinite loop
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
