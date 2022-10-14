#include "main.h"

/**
 * _printf - prints formatted output
 * 
 * @format: a string of specifiers to consider
 * Return: the formatted output
 */

int _printf(const char *format, ...)
{ 
	unsigned int i, j;
	char *s;

	va_list arg;
	va_start(arg, format);

	for(j = 0; format[j] != '\0'; j++)
	{
		while(format[j] != '%')
		{
			if(format[j] == '\0')
				return (j);
			_putchar(format[j]);
			j++;
		}

		j++;

		switch(format[j])
		{
			case 'c': i = va_arg(arg, int);
						_putchar(i);
						break;

			case 's': s = va_arg(arg, char *);
						_puts(s);
						break;
			
			case '%': i = va_arg(arg, int);
						_putchar('%');
						break;
			
			
			default: i = va_arg(arg, int);
						_putchar('%');
						_putchar(format[j]);
						break;
		}
	}
	va_end(arg);

	return (j);
}