#include "../Header/SortClass.h"

int Sorts::Selection(bool out) {
    std::vector<int> dataCopy = this->data;
    for (size_t i = 0; i < this->dataSize; ++i) {
        size_t minIndex = i;
        for (int j = i; j < this->dataSize; ++j) {
            if (dataCopy[j] < dataCopy[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(dataCopy[minIndex], dataCopy[i]);
    }
    if (out) {
        std::cout << "Selection sort:\n";
        std::cout << "From: " << this->data << '\n';
        std::cout << "To: " << dataCopy << '\n';
    }
    return 0;
}