#include "../Header/SortClass.h"


int partition(std::vector<int> &vec, int low, int high) {
    int pivot = vec[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (vec[j] <= pivot) {
            i++;
            std::swap(vec[i], vec[j]);
        }
    }
    std::swap(vec[i + 1], vec[high]);
    return (i + 1);
}

int QuickSort(std::vector<int> &vec, int low, int high) {
    if (low < high) {
        int pi = partition(vec, low, high);
        QuickSort(vec, low, pi - 1);
        QuickSort(vec, pi + 1, high);
    }
    return 0;
}


int Sorts::Quick(bool out) {
    std::vector<int> dataCopy = this->data;
    QuickSort(dataCopy, 0, this->dataSize);
    if (out) {
        std::cout << "Quick sort:\n";
        std::cout << "From: " << this->data << '\n';
        std::cout << "To: " << dataCopy << '\n';
    }
    return 0;
}
