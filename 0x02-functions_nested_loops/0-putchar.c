#include "main"
#include <unisted.h>
/**
 * _putchar - writes the character c to stdout
 *  @c: the character to print
 *  Return: Always 1 (success)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

