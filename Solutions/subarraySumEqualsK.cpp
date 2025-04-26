#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k)
{

    //O(n^3)
    int ans=0;
    int sz=nums.size();
    for (int start = 0; start < sz; ++start)
    {
        for (int end = 0; end < sz; ++end)
        {
            int sum=0;
            for (int idx = start; idx <=end; ++idx)
                sum+=nums[idx];
            if (sum==k)
                ans+=1;

        }
    }
    return ans;
}

void prefixSum(vector<int>&nums)
{
    int sz=nums.size();
    for (int i = 1; i < sz; ++i)
        nums[i]+=nums[i-1];
}
int rangeSum(int st,int en,vector<int> &prefix/*already sumed*/)
{
    if (st==0)
        return prefix[en];
    return prefix[en]-prefix[st-1];
}
int subarraySumV2(vector<int>& nums, int k)
{
    int ans=0;
    int sz=nums.size();
    prefixSum(nums);
    for (int start = 0; start < sz; ++start)
    {
        for (int end = start; end < sz; ++end)
            if (rangeSum(start,end,nums)==k)
                ans+=1;
    }
    return ans;
}

int subarraySumV3(vector<int>& nums, int k)
{
    int sz=nums.size();
    unordered_map<int/*prefix sum */,int/*sum count */>prefixMap;
    prefixMap[0]=1;
    int ans=0 , prefixSum=0;
    for (int i = 0; i < sz; ++i)
    {
        prefixSum+=nums[i];
        if (prefixMap.count(prefixSum-k))
            ans+=prefixMap[prefixSum-k];
        ++prefixMap[prefixSum];

    }
    return ans;
}



int main()
{
    vector<int>v{9, -9, 2, 3, 4};
    cout<<subarraySumV3(v,9)<<endl;
}