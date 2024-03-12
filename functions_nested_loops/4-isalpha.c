#include "main.h"
/**               
 * _isalpha - checks for alphabetic character
 * @c: integer returned if character is letter,lowercase or uppercase
 * Return: 1 if character is a letter,lowercase or uppercase and 0 otherwise 
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
