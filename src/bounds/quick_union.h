#ifndef QUICK_UNION
#define QUICK_UNION

#include <vector>
using namespace std;

template<typename T>
void quick_union(vector<T>& id, const vector<pair<T,T>>& pairs)
{
    for (auto pair : pairs)
    {
        if (pair.first == pair.second) continue;
        int j, k;
        for (j = pair.first; j != id[j]; j = id[j]);
        for (k = pair.second; k != id[k]; k = id[k]);
        if (j != k) id[j] = k;
    }
}

#endif // QUICK_UNION
