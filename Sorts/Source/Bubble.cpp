#include "../Header/SortClass.h"

std::vector<std::pair<std::pair<int, int>, double>> Sorts::Bubble(bool out) {
    std::vector<int> dataCopy = this->data;
    std::vector<std::pair<std::pair<int, int>, double>> swaps;
    auto start = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < this->dataSize; ++i) {
        for (size_t j = 0; j < this->dataSize - 1; ++j) {
            if (dataCopy[j] > dataCopy[j + 1]) {
                auto iteration = std::chrono::high_resolution_clock::now();
                double elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(iteration - start).count();
                swaps.push_back(std::make_pair(std::make_pair(j, j + 1), elapsedTime));
                std::swap(dataCopy[j], dataCopy[j + 1]);
            }
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    double elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << "Time took: " << elapsedTime << '\n';
    if (out) {
        std::cout << "Bubble sort:\n";
        std::cout << "From: " << this->data << '\n';
        std::cout << "To: " << dataCopy << '\n';
    }
    return swaps;
}   
