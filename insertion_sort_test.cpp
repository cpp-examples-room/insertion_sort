#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <numeric>
#include "insertion_sort.hpp"

namespace ns_cpp_examples {
    TEST_CASE("insertion_sort", "[insertion_sort]") {
        std::vector<int> v(64);
        std::iota(v.rbegin(), v.rend(), 0);
        insertion_sort(v);
        std::vector<int> v_ordered(v.size());
        std::iota(v_ordered.begin(), v_ordered.end(), 0);
        REQUIRE(std::equal(v.begin(), v.end(), v_ordered.begin()));
    }
}
