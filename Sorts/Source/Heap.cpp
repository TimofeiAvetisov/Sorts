#include "../Header/SortClass.h"

auto START_HEAP = std::chrono::high_resolution_clock::now(); 
std::vector<std::pair<std::pair<int, int>, int>> swaps_heap;
int TIMEOUT_HEAP = 1;

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
        swaps_heap.push_back({{prevLargest, largest},  swap_time(data[prevLargest], data[largest], START_HEAP, TIMEOUT_HEAP)});
    
        heapify(data, Size, largest);
    }
}

void HeapSort(std::vector<int>&data, int dataSize) {
    START_HEAP = std::chrono::high_resolution_clock::now(); 
    for (int i = dataSize / 2 - 1; i >= 0; i--) {
        heapify(data, dataSize, i);
    }
    

    for (int i = dataSize - 1; i >= 0; i--) {
        swaps_heap.push_back({{0, i}, swap_time(data[0], data[i], START_HEAP, TIMEOUT_HEAP)});
        heapify(data, i, 0);
    }
}

std::vector<std::pair<std::pair<int, int>, int>> Sorts::Heap(bool out, int timeout) {
    TIMEOUT_HEAP = timeout;
    std::vector<int> dataCopy = this->data;
    swaps_heap.clear();

    HeapSort(dataCopy, this->dataSize);

    return swaps_heap;
}