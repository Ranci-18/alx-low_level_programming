#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
