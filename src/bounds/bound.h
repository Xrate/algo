#ifndef BOUND
#define BOUND

template<int n, int m>
void quick_find(int(&id)[n], const int(&pairs)[m][2])
{
    for (int i = 0; i < m; ++i)
    {
        int p = pairs[i][0], q = pairs[i][1];

        if (id[p] == id[q]) continue;
        for (int j = 0; j < n; ++j)
            if (id[j] == id[p]) id[j] = id[q];
    }
}

template<int n, int m>
void quick_union(int(&id)[n], const int(&pairs)[m][2])
{
    for (int i = 0; i < m; ++i)
    {
        int p = pairs[i][0], q = pairs[i][1];
        if (id[p] == id[q]) continue;

        for (int j = p; j != id[j]; j = id[j])
            for (int k = q; k != id[k]; k = id[k])
                if (j != k) id[j] = k;
    }
}

#endif // BOUND

