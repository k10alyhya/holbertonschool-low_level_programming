#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: list of arguments
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints values according to a format string
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j;
	char *separator = "";
	va_list args;
	printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == printers[j].type)
			{
				printf("%s", separator);
				printers[j].print(args);
				separator = ", ";
				j = 4;
			}

			j++;
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
