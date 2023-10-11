#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the first index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t index, next;
    int result;

    if (array == NULL)
        return (-1);

    if (array[0] == value)
        return (0);

    index = 1;

    while (array[index] < value && index < size)
    {
        printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
        index *= 2;
    }

    next = (index >= size) ? (size - 1) : index;

    index /= 2;

    printf("Value found between indexes [%d] and [%d]\n", (int)index, (int)next);

    result = binary_search(array + index, (next + 1) - index, value);

    if (result >= 0)
        result += index;

    return (result);
}
