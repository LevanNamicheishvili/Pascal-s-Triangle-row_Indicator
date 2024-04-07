#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = 33;

        long long arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 1;
                }
            }
        }
        arr[0][0] = arr[1][0] = arr[0][1] = 1;

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
            }
        }
        
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + j) == rowIndex)
                {
                    v.push_back(arr[i][j]);
                }
            }
        }
        if(rowIndex == 33){
            v.insert(v.begin(), 1);
            v.insert(v.end(), 1);
        }
        return v;
    }
};
