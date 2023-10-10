#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t t, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (t = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		t = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", t, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; t < jump && array[t] < value; t++)
		printf("Value checked array[%ld] = [%d]\n", t, array[t]);
	printf("Value checked array[%ld] = [%d]\n", t, array[t]);

	return (array[t] == value ? (int)t : -1);
}
