#include "../Header/SortClass.h"

int Sorts::Bubble() {
    std::vector<int> dataCopy = this->data;
    for (size_t i = 0; i < this->dataSize; ++i) {
        for (size_t j = 0; j < this->dataSize - 1; ++j) {
            if (dataCopy[j] > dataCopy[j + 1]) {
                std::swap(dataCopy[j], dataCopy[j + 1]);
            }
        }
    }

    return 0;
}   
