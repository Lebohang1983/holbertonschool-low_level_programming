#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - creates an array of a spacific size and fill with a char.
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 * Return: An array of charactures.
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 * Return: Pointer to string in memory.
 */
char *_strdup(char *str);

/**
 * str_concat - this function concatenates two strings.
 * @s1: string 1/2 to concat.
 * @s2: string 2/2 to concat.
 * Return: Pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of
 * integers.
 * @width: colums.
 * @height: rows.
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height);

#endif
