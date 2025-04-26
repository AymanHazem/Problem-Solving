#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int>&nums, int target)
{
    unordered_map<int,int>idxMap;
    int sz=nums.size();
    for (int i = 0; i < sz; i++)
    {
        int remain= target - nums[i];
        if (idxMap.count(remain))
            return vector<int>({i,idxMap[remain]});
        idxMap[nums[i]]=i;
    }
    return vector<int>({0,0});
}