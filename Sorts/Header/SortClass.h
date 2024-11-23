#ifndef SORT_CLASS_H
#define SORT_CLASS_H
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>


class Sorts {
    private:
        std::vector<int> data;
        size_t dataSize;
        int numberLimit;

    public:
        Sorts(const size_t MAX_SIZE = 1000, const int MAX_NUMBER = 1000, const std::vector<int>& DEFAULT_DATA = {});
        std::vector<int> get_data();
        int get_dataSize();

        std::vector<std::pair<std::pair<int, int>, int>> Bubble(bool out = false, int timeout = 5);
        std::vector<std::pair<std::pair<int, int>, int>> Insertion(bool out = false, int timeout = 5);
        std::vector<std::pair<std::pair<int, int>, int>> Selection(bool out = false,  int timeout = 5);
        std::vector<std::pair<std::pair<int, int>, int>> Quick(bool out = false, int timeout = 5);
        //std::vector<std::pair<std::pair<int, int>, int>> Merge(bool out = false, int timeout = 1);
        std::vector<std::pair<std::pair<int, int>, int>> Heap(bool out = false, int timeout = 5);
        //std::vector<std::pair<std::pair<int, int>, int>> Counting(bool out = false, int timeout = 5);
        //std::vector<std::pair<std::pair<int, int>, int>> Radix(bool out = false, int timeout = 1);

};

int swap_time(int& a, int& b, std::chrono::time_point<std::chrono::high_resolution_clock>& start_time, int TIMEOUT);
std::ostream& operator<<(std::ostream& os, const std::vector<int>& v);
void busy_wait(int milliseconds);


#endif