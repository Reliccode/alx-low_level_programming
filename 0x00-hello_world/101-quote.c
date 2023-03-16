#include <unistd.h>
/**
 * main - Entry point
 * program prints to stdeer
 * Return: Always 1 (success)
 */

#define STDERR_FILENO 2

int main(void)
{

	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str1, 48);

	return (1);
}
