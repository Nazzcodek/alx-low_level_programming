#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

int main(void);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t start, size_t end, int value);
int exponential_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGO */
