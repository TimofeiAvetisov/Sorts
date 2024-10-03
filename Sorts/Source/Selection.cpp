#include "../Header/SortClass.h"

int Sorts::Selection() {
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
    return 0;
}