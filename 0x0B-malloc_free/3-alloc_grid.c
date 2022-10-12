#include "main.h"

/**
 * alloc_grid -allocates a grid, mak space and free space
 * @width: take in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
int **array;
int i =o, j;

if width == 0 || height == 0)
	return (NULL);
array =  (int **)malloc(size of(ini *) * height);
if (array != NULL)
	for (i < height; i ++)
	{
		array[i] =(int *) malloc(sizr of(int) * width)
			if array[i] != NULL)
	(
	 for (j = 0; j < width; j++)
	 array[]i[j] = 0;
	 }
	 else
	 {
	 while (i >= 0)
	 {
	 free(array[i]);
	 i--;
	 }
	 free(array)
	 return (NULL);
	 }
	 }
	 return (array);
	 }
	 else
	 {
	 return (NULL)
	 }
}
