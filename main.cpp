#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "SortClass.h"

PYBIND11_MODULE(sorts_module, m) {
    pybind11::class_<Sorts>(m, "Sorts")
        .def(pybind11::init<size_t, int, const std::vector<int>&>(), pybind11::arg("MAX_SIZE") = 1000, pybind11::arg("MAX_NUMBER") = 1000, pybind11::arg("DEFAULT_DATA") = std::vector<int>{}, "Constructor with default parameters")
        .def("get_data", &Sorts::get_data, "Get data")               // Экспорт функции get_data
        .def("get_dataSize", &Sorts::get_dataSize, "Get data size")
        .def("Bubble", &Sorts::Bubble, "Bubble sort", pybind11::arg("out") = false, pybind11::arg("timeout") = 5)
        .def("Insertion", &Sorts::Insertion, "Insertion sort", pybind11::arg("out") = false, pybind11::arg("timeout") = 5)
        .def("Selection", &Sorts::Selection, "Selection sort", pybind11::arg("out") = false, pybind11::arg("timeout") = 5)
        .def("Quick", &Sorts::Quick, "Quick sort", pybind11::arg("out") = false, pybind11::arg("timeout") = 5)
        //.def("Merge", &Sorts::Merge, "Merge sort", pybind11::arg("out") = false)
        .def("Heap", &Sorts::Heap, "Heap sort", pybind11::arg("out") = false, pybind11::arg("timeout") = 5);
        //.def("Counting", &Sorts::Counting, "Counting sort", pybind11::arg("out") = false)
        //.def("Radix", &Sorts::Radix, "Radix sort", pybind11::arg("out") = false);
}