# **Printf**

**Synopsis**
---
This is a simple implementation of the printf function that formats and prints data

**Description**
---
The \_printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream.
Returns the count of printed characters when the function is successful and -1 when the function fails.

## Converter Specifiers

The available convention specifiers are:

+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.
+ %u: Prints unsigned integers.
+ %x: Prints the hexadecimal representation of an unsigned decimal in lowercase letters.
+ %X: Prints the hexadecimal representation of an unsigned decimal in uppercase letters.
+ %r: Prints a reversed string.
+ %R: Prints the Rot13 interpretation of a string.
+ %S: Prints none printable characters (0 < ASCII value < 32 or >= 127), starting with \x followed by the ASCII code value in hexadecimal format (upper case - always 2 characters)

## Usage

+ All the files are to be compiled on Ubuntu 20.04 LTS.
+ Compile your code with 'gcc -Wall -Werror -Wextra - pedantic *.c'
+ Include the "main.h" header file on the functions using the _printf()


## Example

```

#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	char *str;

	str = "school";
	a = _printf("%r\n", "alx"); /*expected: xla*/
	printf("--->%d\n", a); /*expected: 4*/

	b = _printf("%s\n", str); /*expected: school*/
	printf("%d\n", b); /*expected: 7*/

	b = _printf("%c\n", 'k'); /*expected: k*/
	printf("%d\n", b); /*expected: 2*/
	return (0);
}

```

## Authors


+ Martins Ndifon
+ Udeme Udeme
