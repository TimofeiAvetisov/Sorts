#include "../Header/SortClass.h"

int Sorts::Counting(bool out) {
    std::vector<int> dataCopy = this->data;
    std::vector<int> numberCnt(this->numberLimit);

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

    if (out) {
        std::cout << "Counting sort:\n";
        std::cout << "From: " << this->data << '\n';
        std::cout << "To: " << dataCopy << '\n';
    }
    return 0;
}