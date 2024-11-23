#include "../Header/SortClass.h"

std::vector<std::pair<std::pair<int, int>, int>> Sorts::Selection(bool out, int timeout) {
    auto START_SELECTION = std::chrono::high_resolution_clock::now();
    std::vector<std::pair<std::pair<int, int>, int>> swaps;
    swaps.clear();
    std::vector<int> dataCopy = this->data;
    for (size_t i = 0; i < this->dataSize; ++i) {
        size_t minIndex = i;
        for (int j = i; j < this->dataSize; ++j) {
            if (dataCopy[j] < dataCopy[minIndex]) {
                minIndex = j;
            }
        }
        swaps.push_back({{minIndex, i}, swap_time(dataCopy[minIndex], dataCopy[i], START_SELECTION, timeout)});
    }

    return swaps;
}