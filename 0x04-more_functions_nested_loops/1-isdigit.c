#include "main.h"
#include <stdio.h>

 /**
  * _isdigit - function that verifies if a character is a digit or not
  * @c: char to be checked
  *
  * Return: returns 1 if it is uppercase , 0 if not
  */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
