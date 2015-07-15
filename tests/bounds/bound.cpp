#include <bounds/bound.h>
#define BOOST_TEST_MODULE BoundTest
#include <boost/test/unit_test.hpp>

static const int pairs[13][2] = {{3,4},
                                 {4,9},
                                 {8,0},
                                 {2,3},
                                 {5,6},
                                 {2,9},
                                 {5,9},
                                 {7,3},
                                 {4,8},
                                 {5,6},
                                 {0,2},
                                 {6,1},
                                 {5,8}};

BOOST_AUTO_TEST_CASE( quick_find_test )
{
    int id[10] = {0,1,2,3,4,5,6,7,8,9};
    int result[10] = {1,1,1,1,1,1,1,1,1,1};

    quick_find(id, pairs);
    BOOST_CHECK_EQUAL_COLLECTIONS(std::begin(id), std::end(id), std::begin(result), std::end(result));
}

BOOST_AUTO_TEST_CASE( quick_union_test )
{
    int id[10] = {0,1,2,3,4,5,6,7,8,9};
    int result[10] = {1,1,9,4,9,6,9,9,0,0};

    quick_union(id, pairs);
    BOOST_CHECK_EQUAL_COLLECTIONS(std::begin(id), std::end(id), std::begin(result), std::end(result));
}
