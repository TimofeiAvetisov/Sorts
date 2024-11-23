#include "../Header/SortClass.h"

auto START_BUBBLE = std::chrono::high_resolution_clock::now();

std::vector<std::pair<std::pair<int, int>, int>> Sorts::Bubble(bool out, int timeout) {
    std::vector<int> dataCopy = this->data;

    std::vector<std::pair<std::pair<int, int>, int>> swaps;
    START_BUBBLE = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < this->dataSize; ++i) {
        for (size_t j = 0; j < this->dataSize - 1; ++j) {
            if (dataCopy[j] > dataCopy[j + 1]) {
                swaps.push_back({{j, j + 1}, swap_time(dataCopy[j], dataCopy[j + 1], START_BUBBLE, timeout)});
            }
        }
    }

    return swaps;
}   
