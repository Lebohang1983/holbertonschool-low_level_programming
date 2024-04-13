#ifndef MAIN_H
#define MAIN_H

/** 
 * malloc_checked - fuction that allocates memory
 * @b: size of memory to allocate.
 * Return: pointer to memory, Else if return exit status 98.
 */
void *malloc_checked(unsigned int b);

/**
 *string_nconcat- function that concatenates two strings
 * @i: size of s2
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif 
