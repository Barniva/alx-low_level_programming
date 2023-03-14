#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry Point
 * @str : a pointer to a character
 * Return:character
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;
	int leng;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		leng++;
		j++;
	}
	s = malloc(leng + 1);

	if (s == 0 || leng == 0)
		return (0);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
