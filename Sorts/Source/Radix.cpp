#include "../Header/SortClass.h"

int GetMax(std::vector<int>& data, int dataSize)
{
    int maxNumber = data[0];
    for (int i = 1; i < dataSize; i++)
        if (data[i] > maxNumber)
            maxNumber = data[i];
    return maxNumber;
}

void CountSort(std::vector<int>& data, int dataSize, int exp)
{
    std::vector<int> output(dataSize), count(10, 0);

    for (int i = 0; i < dataSize; i++) {
        count[(data[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = dataSize - 1; i >= 0; i--) {
        output[count[(data[i] / exp) % 10] - 1] = data[i];
        count[(data[i] / exp) % 10]--;
    }

    for (int i = 0; i < dataSize; i++) {
        data[i] = output[i];
    }
}

void RadixSort(std::vector<int>& data, int dataSize)
{
    int maxValue = GetMax(data, dataSize);
    for (int exp = 1; maxValue / exp > 0; exp *= 10) {
        CountSort(data, dataSize, exp);
    }
}

int Sorts::Radix(bool out) {
    std::vector<int> dataCopy = this->data;
    RadixSort(dataCopy, this->dataSize);
    if (out) {
        std::cout << "Radix sort:\n";
        std::cout << "From: " << this->data << '\n';
        std::cout << "To: " << dataCopy << '\n';
    }

    return 0;
}