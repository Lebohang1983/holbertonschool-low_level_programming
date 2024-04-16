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
 * @s1: character to be concatenated
 * @s2: character to be concatenated
 * Return: NULL
 */
  char *string_nconcat(char *s1, char *s2, unsigned int n);


/**
 *void *_calloc- function that allocates memory for an array
 * nmemb: number of elements in the array to be allocated memory
 * @i: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size);
#endif 
