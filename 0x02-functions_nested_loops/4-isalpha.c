#include "main.h"
#include <stdio.h>
/**
  * _isalpha - check for alphabets
  * @c: character
  * Return: 0 Always
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
