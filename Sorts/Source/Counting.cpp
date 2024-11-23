#include "../Header/SortClass.h"

std::vector<std::pair<std::pair<int, int>, double>> Sorts::Counting(bool out) {
    std::vector<int> dataCopy = this->data;
    std::vector<int> numberCnt(this->numberLimit);  

    std::vector<std::pair<std::pair<int, int>, double>> swaps;

    for (int i = 0; i < this->dataSize; ++i) {
        numberCnt[dataCopy[i]]++;
    }
    int index = 0;
    for (int i = 0; i < this->numberLimit; ++i) {
        while (numberCnt[i] > 0) {
            dataCopy[index++] = i;
            numberCnt[i]--;
        }
    }

    return swaps;
}