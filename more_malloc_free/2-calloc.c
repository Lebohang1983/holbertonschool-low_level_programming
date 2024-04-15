#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *void *_calloc- function that allocates memory for an array
 * nmemb: number of elements in the array to be allocated memory
 * @i: size of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
   
    size_t total_size = nmemb * size;

    void *ptr = calloc(nmemb, size);

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    return ptr;
}

int main() {
    // Test _calloc
    int *arr = (int *)_calloc(5, sizeof(int));
    if (arr != NULL) {
       
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;
        }

        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        free(arr);
    }

    return 0;
}
