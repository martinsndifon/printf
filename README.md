# **Printf**

**Synopsis**
---
This is a simple implementation of the printf function that formats and prints data

**Description**
---
The \_printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream.
Returns the count of printed characters when the function is successful and -1 when the function fails.

# Converter Specifiers

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
+ %S: Prints none printable characters (0 < ASCII value < 32 or >= 127), starting with \x

