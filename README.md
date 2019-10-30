
# _printf function

## Description
Create a function that works like C's printf function for the required cases.

---

### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./_printf.c)
* Write a function that produces output according to a format, handling the following conversion specifiers:

-   `c` Prints the corresponding ASCII character
-   `s` Prints character string (ending in '\ 0')
-   `%` Prints % symbol, (e.g. %% prints one % symbol)


### [1. Education is when you read the fine print. Experience is what you get if you don't](./_printf.c)
* Handle the following conversion specifiers:
-   `d` Prints decimal (integer) number (base 10)
-   `i` Prints integer (base 10)


### [2. Just because it's in print doesn't mean it's the gospel](./man_3_printf)
* Create a man page for your function.

---

#### Additional Options:
-   'b' Prints the binary conversion of a integer
-   'u' Prints unsigned decimal (integer) number
-   'o' Prints octal number (base 8)
-   'x' Prints number in hexadecimal (base 16) lowercase
-   'X' Prints number in hexadecimal (base 16) uppercase
-   'r' Prints the reversed string
-   'R' Prints the rot13'ed string

---

## EXAMPLE

- To print "Hello Holberton" use:

                  #include "holberton.h"

                  _printf("%s", "Hello Holberton");


- To print a line as "My age is, 23" use:

                  #include "holberton.h"

                  _printf("%s, %d", "My age is", 23);
---

### RETURN VALUE

Upon successful return, this function return the number of characters printed (excluding the null byte used to end output to strings).

---


### Man file:

-   man_3_printf (Open it in linux using man command (e.g. man ./man_3_printf)

---

## Authors
* **Miguel Parada** - [MichaelAuditore](https://github.com/MichaelAuditore)
*  **Alexander Urrego** - [mateo-a](https://github.com/mateo-a)
