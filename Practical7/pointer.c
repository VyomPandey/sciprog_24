#include <stdio.h>
#include <stdlib.h>

int* allocatearray(int size) {
    return (int*)malloc(size * sizeof(int));
}

void fillwithones(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 1;
    }
}

void printarray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void freearray(int **array) {
    free(*array);
    *array = NULL; 
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *array = allocatearray(size);
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    fillwithones(array, size);

    printf("Array elements: ");
    printarray(array, size);

    freearray(&array);

    return 0;
}
