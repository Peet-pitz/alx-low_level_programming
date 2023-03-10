#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: First string
 * @s2: Second string
 * Return: Value less than 0 if string is less than the other
 * Value greater than 0 if string is greater than the other
 * 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	intcounter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1 [counter] - s2[counter];
	return (comVal);
}
