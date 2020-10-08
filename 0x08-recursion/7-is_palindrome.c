#include "holberton.h"

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * @start: start of string
 * @end: end of string
 * Return: 1 if palindrome and 0 if not
 */
int palindrome(char *s, int start, int end);

int is_palindrome(char *s)
{
	int start = 0, end = _strlen_recursion(s);

	if (*s == 1)
		return (1);
	else if (*s == 0)
		return (0);
	end--;
	return (palindrome(s, start, end));
}
/**
 * palindrome - determines if string is palindrome
 * @s: string
 * @start: start
 * @end: end
 * Return: 0 if not palindrome, 1 if is palindrome
 */
int palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	else if (start <= end)
		return (1);
	else
		return (palindrome(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - returns string length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);
	length = (_strlen_recursion(s + 1) + 1);
	return (length);
}
