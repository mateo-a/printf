
# _printf function

## Description
This is a simple implementation of a function that works like C's printf function for the required cases.


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
## CHALLENGES FACED AND FUTURE FEATURES
> This was a very interesting project where I managed to consolidate a lot of knowledge; it was quite challenging since we had 5 days to carry out the entire project and we had to understand in detail several characteristics of the PRINT-F function to achieve a similar implementation in our function. Additionally, we had to implement a local buffer of 1024 chars in order to call our write function as little as possible, designing this function took us a long time but it was quite useful to speed up the development of other functionalities within the project.
>
> As a future features will be interesting to handle some additional custom conversion specifiers.
>
---

## Authors
* **Miguel Parada** - [MichaelAuditore](https://github.com/MichaelAuditore)
*  **Alexander Urrego** - [mateo-a](https://github.com/mateo-a)

---
## About myself
I am a Systems Engineer with emphasis in Software :man_technologist:, ITIL Foundation certificate, CompTia Network+ certificate, PMP project management training, SCRUM Foundation certificate, proficient in the use programing languages like `C, C++, Python, REACT, JavaScript, CSS, HTML, SQL`, as well `Flutter, Linux/Unix systems, bash, scripting, GIT, Windows Server, GCP, frameworks like Node.js` and `Flask, NGINX,` **currently going in-depth in Augmented and Virtual Reality (AR/VR)** using `C#` and `UNITY`, huge experience working and supporting infrastructure projects related to datacenters, WLAN, LAN and Networking.

## Where to find me
<a href="https://www.linkedin.com/in/john-alexander-urrego/">
  <img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" />
</a>
<a href="https://twitter.com/mateo_a">
  <img src="https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white" />        
</a>
