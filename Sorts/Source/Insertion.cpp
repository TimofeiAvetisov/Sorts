#include "../Header/SortClass.h"

int Sorts::Insertion(bool out) {
    std::vector<int> dataCopy = this->data;
    for (size_t i = 0; i < this->dataSize - 1; ++i) {
        for (size_t j = i + 1; j > 0 && data[j] < data[j - 1]; --j) {
            std::swap(data[j], data[j - 1]);
        }
    }
    if (out) {
        std::cout << "Insertion sort:\n";
        std::cout << "From: " << this->data << '\n';
        std::cout << "To: " << dataCopy << '\n';
    }
    
    return 0;
}