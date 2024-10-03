#ifndef SORT_CLASS_H
#define SORT_CLASS_H
#include <iostream>
#include <vector>
#include <random>


class Sorts {
    private:
        std::vector<int> data;
        size_t dataSize;
        int numberLimit;

    public:
        Sorts(const size_t MAX_SIZE = 1000, const int MAX_NUMBER = 1000, const std::vector<int>& DEFAULT_DATA = {});

        int Bubble();
        int Insertion();
        int Selection();
        int Quick();

};

#endif SORT_CLASS_H;