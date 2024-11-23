#include "../Header/SortClass.h"

std::vector<std::pair<std::pair<int, int>, int>> swaps_quick;
int TIMEOUT_QUICK = 1;
auto START_QUICK = std::chrono::high_resolution_clock::now(); 

int partition(std::vector<int> &vec, int low, int high) {
    int pivot = vec[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (vec[j] <= pivot) {
            i++;
            swaps_quick.push_back({{i, j}, swap_time(vec[i], vec[j], START_QUICK, TIMEOUT_QUICK)});
        }
    }
    swaps_quick.push_back({{i + 1, high}, swap_time(vec[i + 1], vec[high], START_QUICK, TIMEOUT_QUICK)});
    return (i + 1);
}

int QuickSort(std::vector<int> &vec, int low, int high) {
    if (low < high) {
        int pi = partition(vec, low, high);
        QuickSort(vec, low, pi - 1);
        QuickSort(vec, pi + 1, high);
    }
    return 0;
}


std::vector<std::pair<std::pair<int, int>, int>> Sorts::Quick(bool out, int timeout) {
    TIMEOUT_QUICK = timeout;
    swaps_quick.clear();
    std::vector<int> dataCopy = this->data;
    START_QUICK = std::chrono::high_resolution_clock::now();
    QuickSort(dataCopy, 0, this->dataSize - 1);
    return swaps_quick;
}
