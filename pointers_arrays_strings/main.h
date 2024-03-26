#ifndef MAIN_H
#define MAIN_H
 /**
  * reset_to_98 - set a pointer to 98.
  * @n: pointer to change
  */
void reset_to_98(int *n);

/**
 * swap_int - a function that swaps the values of two integers
 * @a: one of two points to be swaped
 * @b: two of two points to be swapped
 */
void swap_int(int *a, int *b);

/**
  * _strlen - return the lenth of the string as an int value
  * @s: the string to measure.
  * Return: Int value of the lenth.
  */
int _strlen(char *s);

/**                                                                                       
  * _puts - Prints a string                                                               
  * @str: The string to print                                                             
  * Return: void
  */
void _puts(char *str);
int _putchar(char c);

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  * Return: void 
  */
void print_rev(char *s);   
 
/**
  * rev_string - reverse a string.
  * @s: string to reverse
  * Return = void
  */
void rev_string(char *s);

/**                                                                                       
 * puts2 - every other char
 * @str: string to process
 */
void puts2(char *str);

/**
 * print_array - prints an aray a number of times.
 * @a: an array.
 * @n: the number of elements to print.
 */
void print_array(int *a, int n);


/**
 * _strcpy - fuction copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 * Return: a copy of the src.
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string.
 */
int _atoi(char *s);

/**
 * _strcat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @dest.
 * @n: copy up to poistion 'n'
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: how much to copy from src into dest.
 * Return: a pointer to @des
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare to strings
 * @s1: the string to compare agenst.
 * @s2: the string to compare.
 * Return: a int value.
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - desciption
 * @a: the array to reverse
 * @n: number of elements to reverse.
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - uppercase all lower case letters in a string.
 * @s: string to process.
 * Return: a pointer.
 */
char *string_toupper(char *s);

/**
* is_sep - check if a char is a seperator.
* @s: the char to test.
* Return: 1 if seperator is found else 0
*/
int is_sep(char s);

/**
* cap_string - This function capitalizes all words of a string.
* @s: sring to be processed.
* Return: pointer to the modified string.
*/
char *cap_string(char *s);

/**
 * leet - breaking out the leet speak.
 * @s: string to make 1337
 * Return: a point the s
 */
char *leet(char *s);

/**
 * _memset - this funtion fills memory with a constant byte.
 * @b: a constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n);


/**
 * _memcpy - fuction that copies n bytes from a source to a destination.
 * @dest: destionation for the copying the bytes to.
 * @src: source of the bytes to copy.
 * @n: number of bytes to copy over.
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - returns a point to the first occurance of a character in a string.
 * @s: string to search for the character in.
 * @c: char to the search for.
 * Return: pointer to char or else NULL.
 */
char *_strchr(char *s, char c);

/**
 * _strspn - function  calculates  the  length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search for.
 * Return: the number (U_INT) of bytes matching accept.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 * Return: pointer to to byte s that matches one of the byes in accept, or NUL
 */
char *_strpbrk(char *s, char *accept);


/**
 * _strstr - function that locates a substring.
 * @haystack: source string to search through.
 * @needle: string to search for.
 * Return: return beginning of located substring or NULL.
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints a chestboard out and it's pieaces from a matrix;
 * @a: matrix of the board and pieces current location.
 * Return: Nothing
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: bad idea.
 * @size: the size of the the array.
 * Return: Nothing
 */
void print_diagsums(int *a, int size);

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: source for copy
 * @to: string to copy to.
 * Return: Nothing
 */
void set_string(char **s, char *to);

#endif
