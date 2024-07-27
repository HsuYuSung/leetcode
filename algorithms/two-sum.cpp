// https://leetcode.com/problems/two-sum
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i{0}; i < nums.size(); ++i)
    {
        mp[nums[i]] = i;
    }

    for (int i{0}; i < nums.size(); i++)
    {
        int candidate = target - nums[i];

        if (mp[candidate] and mp[candidate] != i)
        {
            return {mp[candidate], i};
        }
    }

    return {};
}

int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    vector<int> v = twoSum(nums, target);

    for (auto i : v)
    {
        printf("%d ", i);
    }

    return 0;
}