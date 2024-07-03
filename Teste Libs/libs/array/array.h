#include <stdio.h>

typedef struct {
    int *array;
    size_t size;
    size_t used;
} Array;

void initArray(Array *a, size_t initialSize);
void appendArray(Array *a, int value);
void freeArray(Array *a);

extern struct Array;
