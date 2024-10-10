#include "../Header/SortClass.h"

std::ostream& operator<<(std::ostream& os, const std::vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        os << v[i] << ' ';
    }
    return os;
}