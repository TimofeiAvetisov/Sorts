#ifndef SORT_CLASS_H
#define SORT_CLASS_H
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <chrono>


class Sorts {
    private:
        std::vector<int> data;
        size_t dataSize;
        int numberLimit;

    public:
        Sorts(const size_t MAX_SIZE = 1000, const int MAX_NUMBER = 1000, const std::vector<int>& DEFAULT_DATA = {});

        std::vector<std::pair<std::pair<int, int>, double>> Bubble(bool out = false);
        int Insertion(bool out = false);
        int Selection(bool out = false);
        int Quick(bool out = false);
        int Merge(bool out = false);
        int Heap(bool out = false);
        int Counting(bool out = false);
        int Radix(bool out = false);

};

std::ostream& operator<<(std::ostream& os, const std::vector<int>& v);


#endif