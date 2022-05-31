#include "main.h"
#include <unistd.h>
#include <sdtdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1 and -1 as error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
