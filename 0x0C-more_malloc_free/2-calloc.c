#include "main.h"

/**
 * _collac - allocate memory and set all values to 0
 * @nmamb: size
 * @size: sizeof(datatype)
 * Return: pointerr to coalloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);

}
