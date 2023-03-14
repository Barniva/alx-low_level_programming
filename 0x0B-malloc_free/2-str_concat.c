#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry Point
 * @s1 : character one
 * @s2 : character two
 * Return:character
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int leng = 0;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[i] != '\0')
	{
		leng++;
		i++;
	}
	while (s2[j] != '\0')
	{
		leng++;
		j++;
	}
	s = malloc(leng + 1);
	if (s == 0)
	{
		return (NULL);
	}
	while (s1[k] != '\0')
	{
		s[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		s[k] = s2[l];
		l++;
		k++;
	}
	s[l] += '\0';
	return (s);
}
