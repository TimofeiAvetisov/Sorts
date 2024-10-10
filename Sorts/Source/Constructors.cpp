#include "../Header/SortClass.h"

Sorts::Sorts(const size_t MAX_SIZE, const int MAX_NUMBER, const std::vector<int>& DEFAULT_DATA) {
    this->dataSize = MAX_SIZE;
    this->numberLimit = MAX_NUMBER;
    this->data = DEFAULT_DATA;
    if (this->data.size() != this->dataSize) {
        data.resize(this->dataSize);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(1, MAX_NUMBER);
        for (size_t i = 0; i < this->dataSize; ++i) {
            (this->data)[i] = dist(gen);
        }
    }
    
}   