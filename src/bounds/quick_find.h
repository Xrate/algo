#ifndef QUICK_FIND
#define QUICK_FIND

#include <vector>
using namespace std;

template<typename T>
void quick_find(vector<T>& id, const vector<pair<T,T>>& pairs)
{
    for (auto pair : pairs)
    {
        T t = id[pair.first];
        if (t == pair.second) continue;
        for(int i=0; i < id.size(); ++i)
            if(id[i] == t)
                id[i] = id[pair.second];
    }
}

#endif // QUICK_FIND
