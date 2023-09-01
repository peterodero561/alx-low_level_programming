/*
 * File: 100-is_palindrome
 * Auth: Peter
 */

int is_palindrome(char *s);
int get_length(char s);
int my_pal(char *s, int l);

/**
 * is_palindrome - dtermines whether a given string is a palindrome or not
 * @s: string to be determined
 *
 * Return: 1 if string is a palindrome other wise 0
 */

int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (my_pal(s, --length));
}

/**
 * get_length - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * my_pal - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}
