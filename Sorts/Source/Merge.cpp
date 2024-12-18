#include "../Header/SortClass.h"

auto START_TIME = std::chrono::high_resolution_clock::now(); 
std::vector<std::pair<std::pair<int, int>, double>> swaps_merge;
int TIMEOUT = 10;

void MergeIntoOne(std::vector<int>& data, int left, int mid, int right) {
    int leftPointer, rightPointer, pointer;
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    std::vector<int> leftVec(leftSize), rightVec(rightSize);
    for (leftPointer = 0; leftPointer < leftSize; leftPointer++)
        leftVec[leftPointer] = data[left + leftPointer];
    for (rightPointer = 0; rightPointer < rightSize; rightPointer++)
        rightVec[rightPointer] = data[mid + 1 + rightPointer];

    leftPointer = 0;
    rightPointer = 0;
    pointer = left;
    while (leftPointer < leftSize && rightPointer < rightSize) {
        if (leftVec[leftPointer] <= rightVec[rightPointer]) {
            data[pointer] = leftVec[leftPointer];
            leftPointer++;
        } else {
            data[pointer] = rightVec[rightPointer];
            rightPointer++;
        }
        pointer++;
    }

    while (leftPointer < leftSize) {
        data[pointer] = leftVec[leftPointer];
        leftPointer++;
        pointer++;
    }

    while (rightPointer < rightSize) {
        data[pointer] = rightVec[rightPointer];
        rightPointer++;
        pointer++;
    }
}

void MergeSort(std::vector<int>& data, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        MergeSort(data, left, mid);
        MergeSort(data, mid + 1, right);
        MergeIntoOne(data, left, mid, right);
    }
}


std::vector<std::pair<std::pair<int, int>, double>> Sorts::Merge(bool out, int timeout) {
    TIMEOUT = timeout;
    START_TIME = std::chrono::high_resolution_clock::now();
    std::vector<int> dataCopy = this->data;
    MergeSort(dataCopy, 0, this->dataSize);
    return swaps_merge;
}