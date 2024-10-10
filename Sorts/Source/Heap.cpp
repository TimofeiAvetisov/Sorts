#include "../Header/SortClass.h"



void heapify(std::vector<int>& data, int Size, int prevLargest) {
    int largest = prevLargest;
    int left = 2 * prevLargest + 1;
    int right = 2 * prevLargest + 2;

    if (left < Size && data[left] > data[largest]) {
        largest = left;
    }
 
    if (right < Size && data[right] > data[largest]) {
        largest = right;
    }
 
    if (largest != prevLargest) {
        std::swap(data[prevLargest], data[largest]);
        heapify(data, Size, largest);
    }
}

void HeapSort(std::vector<int>&data, int dataSize) {
    for (int i = dataSize / 2 - 1; i >= 0; i--) {
        heapify(data, dataSize, i);
    }
 
    for (int i = dataSize - 1; i >= 0; i--) {
        std::swap(data[0], data[i]);
        heapify(data, i, 0);
    }
}

int Sorts::Heap(bool out) {
    std::vector<int> dataCopy = this->data;
    HeapSort(dataCopy, this->dataSize);
    if (out) {
        std::cout << "Heap sort:\n";
        std::cout << "From: " << this->data << '\n';
        std::cout << "To: " << dataCopy << '\n';
    }
    return 0;
}