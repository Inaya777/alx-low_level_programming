#include "main.h"
/**
  * _strchr - function that locate a character in a string
  * @s: pointer variable
  * @c: character
  * Return: S always
  */
char *_strchr(char *s, char *c)
{
	while (*s != '\0')
		if (*s == c)
		{
			s++;
			return (s);
		}
	return (NULL);
}
