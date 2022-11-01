#include "osnova.h"
#include <stdio.h>
#include <stdlib.h>

void fill_array(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        setbuf(stdin, NULL);
        scanf("%d", array + i);
        setbuf(stdin, NULL);
    }
}

void print_d(const int array[], const unsigned int size)
{
    for (unsigned int i = 0; i < size; ++i) {
        printf(" %d ", array[i]);
    }
    puts("\n");
}

int min_d(const int array[], const unsigned int size)
{
    int min = array[0];
    for (unsigned int i = 1; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

int max_d(const int array[], const unsigned int size)
{
    int max = array[0];
    for (unsigned int i = 1; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

void reserv_d(int *array, const unsigned int size)
{

    int go = array[0];
    for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        array[i] = array[j];
        array[j] = go;
        go = array[i + 1];
    }
}

int sravnenie(const int array[], const int tu_array[], const unsigned int size)
{
    int res = 1;
    for (unsigned int i = 0; i < size; ++i) {
        if (array[i] != tu_array[i]) {
            res = 0;
            break;
        }
    }
    return res;
}

void bubble_sort(int *array, const unsigned int size)
{
    for (unsigned int i = 0; i < size - 1; ++i) {
        for (unsigned int j = (size - 1); j > 0; --j) {
            if (array[j - 1] > array[j]) {
                int tmp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = tmp;
            }
        }
    }
}