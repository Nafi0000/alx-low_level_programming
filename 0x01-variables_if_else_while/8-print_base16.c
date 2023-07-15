#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
    for (num = 0; num <= 15; num++)
    {
     	printf("%x", num);
    }
    printf("\n");
    return (0);
}
