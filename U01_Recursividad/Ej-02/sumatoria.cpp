#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
    if(*arr==0)
        return 1;

    return *arr+sumatoria(arr, size-1);
}
