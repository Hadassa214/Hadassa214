#include <iostream>

void bubbleSortAscending(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            comparisons++; // Incrementar el contador de comparaciones
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swaps++; // Incrementar el contador de intercambios
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            comparisons++; // Incrementar el contador de comparaciones
            if (arr[j] < arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swaps++; // Incrementar el contador de intercambios
            }
        }
    }
}

void insertionSort(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            comparisons++; // Incrementar el contador de comparaciones
            arr[j + 1] = arr[j];
            swaps++; // Incrementar el contador de intercambios
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {9, 22, 56, -4, 456, 98, 76, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons_asc = 0, swaps_asc = 0;
    int comparisons_desc = 0, swaps_desc = 0;
    int comparisons_ins = 0, swaps_ins = 0;
    
    std::cout << "Método de Ordenamiento Burbuja Ascendente" << std::endl;
    
    // Ordenamiento ascendente (Bubble Sort)
    int arr_asc_bubble[n];
    std::copy(arr, arr + n, arr_asc_bubble);
    std::cout << "\nArray original Ascendente:" << std::endl;
    printArray(arr_asc_bubble, n);
    bubbleSortAscending(arr_asc_bubble, n, comparisons_asc, swaps_asc);
    std::cout << "Array ordenado Ascendente:" << std::endl;
    printArray(arr_asc_bubble, n);
    std::cout << "Número de comparaciones Ascendente: " << comparisons_asc << std::endl;
    std::cout << "Número de intercambios Ascendente: " << swaps_asc << std::endl;

    // Línea de separación
    std::cout << "----------------------------------" << std::endl;

    std::cout << "\nMétodo de Ordenamiento Burbuja  Descendente" << std::endl;
    
    // Ordenamiento descendente (Bubble Sort)
    int arr_desc_bubble[n];
    std::copy(arr, arr + n, arr_desc_bubble);
    std::cout << "\nArray original Descendente:" << std::endl;
    printArray(arr_desc_bubble, n);
    bubbleSortDescending(arr_desc_bubble, n, comparisons_desc, swaps_desc);
    std::cout << "Array ordenado Descendente:" << std::endl;
    printArray(arr_desc_bubble, n);
    std::cout << "Número de comparaciones Descendente: " << comparisons_desc << std::endl;
    std::cout << "Número de intercambios descendente: " << swaps_desc << std::endl;

    // Línea de separación
    std::cout << "----------------------------------" << std::endl;

    std::cout << "\nMétodo de Ordenamiento por Inserción" << std::endl;

    // Ordenamiento ascendente (Insertion Sort)
    int arr_asc_insertion[n];
    std::copy(arr, arr + n, arr_asc_insertion);
    std::cout << "\nArray original Ascendente:" << std::endl;
    printArray(arr_asc_insertion, n);
    insertionSort(arr_asc_insertion, n, comparisons_ins, swaps_ins);
    std::cout << "Array ordenado Descendente:" << std::endl;
    printArray(arr_asc_insertion, n);
    std::cout << "Número de comparaciones Ascendentes: " << comparisons_ins << std::endl;
    std::cout << "Número de intercambios Desentendes: " << swaps_ins << std::endl;

    return 0;
}