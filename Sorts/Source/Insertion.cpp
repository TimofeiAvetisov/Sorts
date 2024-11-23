#include "../Header/SortClass.h"

std::vector<std::pair<std::pair<int, int>, int>> Sorts::Insertion(bool out, int timeout) {
    auto start_time = std::chrono::high_resolution_clock::now();
    std::vector<std::pair<std::pair<int, int>, int>> swaps;
    swaps.clear();

    std::vector<int> dataCopy = this->data;
    for (int i = 0; i < this->dataSize - 1; ++i) {
        for (int j = i + 1; j > 0 && dataCopy[j] < dataCopy[j - 1]; --j) {
            swaps.push_back({{j, j - 1}, swap_time(dataCopy[j], dataCopy[j - 1], start_time, timeout)});
        }
    }
    
    return swaps;
}