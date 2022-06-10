#include<bits/stdc++.h>
vector<int> Solution::repeatedNumber(const vector<int> &nums) {
{
    int n = array.size() + 1;

    vector<int> temp(n, 0); // initializing the temp array with 0 of size n+1.

    vector<int> ans;              // initializing the answer  array .

    for (int i = 0; i < array.size(); i++)
    {
        temp[array[i]]++;
    }

    for (int i = 1; i <= array.size(); i++)
    {
        if (temp[i] == 0 || temp[i] > 1)
        {
            ans.push_back(i);
        }
    }

    return ans;
}
}
