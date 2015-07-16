#include <bounds/quick_find.h>
#include <boost/test/unit_test.hpp>
#include <vector>
using namespace std;

static const vector<pair<int,int>> pairs = {make_pair(3,4),
                                            make_pair(4,9),
                                            make_pair(8,0),
                                            make_pair(2,3),
                                            make_pair(5,6),
                                            make_pair(2,9),
                                            make_pair(5,9),
                                            make_pair(7,3),
                                            make_pair(4,8),
                                            make_pair(5,6),
                                            make_pair(0,2),
                                            make_pair(6,1)};

BOOST_AUTO_TEST_CASE( quick_find_test )
{
    vector<int> id = {0,1,2,3,4,5,6,7,8,9};
    vector<int> result = {1,1,1,1,1,1,1,1,1,1};

    quick_find(id, pairs);
    BOOST_CHECK_EQUAL(id.size(), result.size());

    BOOST_CHECK_EQUAL_COLLECTIONS(id.begin(), id.end(), result.begin(), result.end());

    BOOST_CHECK_EQUAL(id.size(), result.size());

}
