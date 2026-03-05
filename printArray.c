//
// Created by bg on 05/03/2026.
//

#include "printArray.h"
#include <stdio.h>

// Nur für Zahlen geeignet
void printArray(int* A, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d",A[i]);
        if (i != size-1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void printArrayPart(int* A, int leftindex, int rightindex) {
    printf("[");
    for (int i = leftindex; i <= rightindex; i++) {
        printf("%d",A[i]);
        if (i != rightindex) {
            printf(", ");
        }
    }
    printf("]\n");
}