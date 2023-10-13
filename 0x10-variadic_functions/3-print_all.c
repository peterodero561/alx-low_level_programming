#include "variadic_functions.h"

/**
 * void print_all - prints anything
 * @format: is a list of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list args;
	const char *format_ptr = format;
	
	va_start(args, format);

	while (*format_ptr)
	{
		switch (*format_ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
		}
		format_ptr++;
	}
	va_end(args);
	printf("\n");
}
