#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: Pointer to the array to search in
 * @left: Left boundary of the subarray
 * @right: Right boundary of the subarray
 * @value: The value to search for
 * Return: Index where the value is found, -1 if not found
 */
int binary_search(int *array, int left, int right, int value)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

/**
 * exponential_search - Exponential search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: Index where the value is found, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    if (array[0] == value)
        return 0;

    int i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        i *= 2;
    }

    int left = i / 2;
    int right = (i < size) ? i : size - 1;

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    return binary_search(array, left, right, value);
}
