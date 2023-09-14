#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return:void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *s;
	float f;

	va_start(args, format);
	while (format && format[i])
	{
		c = format[i];

		if (c == 'c')
			printf("%c", va_arg(args, int));
		else if (c == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (c == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (c == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}

		i++;

		if (format[i])
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
