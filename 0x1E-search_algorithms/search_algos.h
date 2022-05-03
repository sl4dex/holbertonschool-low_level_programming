#ifndef S_ALGOS_H
#define S_ALGOS_H
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int bin_s(int *array, int start, int end, int value);

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif
