#include "insertion_sort.hpp"

namespace ns_cpp_examples {
    void insertion_sort(std::vector<int>& v) {
        auto size = v.size();
        for(std::vector<int>::difference_type i = 1, j = 0; i < size; ++i, j = i - 1) {
            auto key = v[i];
            while(j >= 0 && v[j] > key) {
                v[j + 1] = v[j];
                --j;
            }
            v[j + 1] = key;
        }
    }
}
