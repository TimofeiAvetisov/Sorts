#include "../Header/SortClass.h"

int Sorts::Insertion() {
    std::vector<int> dataCopy = this->data;
    for (size_t i = 0; i < this->dataSize - 1; ++i) {
        for (size_t j = i + 1; j > 0 && data[j] < data[j - 1]; --j) {
            std::swap(data[j], data[j - 1]);
        }
    }
    
    return 0;
}