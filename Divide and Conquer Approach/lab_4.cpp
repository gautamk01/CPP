#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

template <typename T>
vector<size_t> sort_indexes(const vector<T> &v)
{

    // initialize original index locations
    vector<size_t> idx(v.size());
    iota(idx.begin(), idx.end(), 0);

    // sort indexes based on comparing values in v
    sort(idx.begin(), idx.end(),
         [&v](size_t i1, size_t i2)
         { return v[i1] < v[i2]; });

    return idx;
}

vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
{
    vector<float> dist;
    vector<vector<int>> ans;

    for (vector<vector<int>>::iterator it = points.begin(); it < points.end(); it++)
    {
        vector<int> point = *it;
        dist.push_back(sqrt(pow(point[0], 2) + pow(point[1], 2)));
    }

    vector<size_t> sorted_indices = sort_indexes(dist);
    for (int i = 0; i < K; i++)
    {
        int idx = sorted_indices[i];
        ans.push_back(points[idx]);
    }

    return ans;
}
int main()
{
    vector<vector<int>> vect{{1, 3}, {-2, 2}};
    vector<vector<int>> sol;
    sol = kClosest(vect, 1);
    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}