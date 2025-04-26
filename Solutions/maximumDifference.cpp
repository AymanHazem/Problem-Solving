#include <bits/stdc++.h>
using namespace std;
int maximumDifference(vector<int>& nums)
{
    int sz=nums.size();
    int maxDiff=-1;
    int maxSoFar=nums.back();
    for (int i = sz-2; i >= 0; --i)
    {
        if (nums[i]<maxSoFar)
            maxDiff=max(maxDiff,maxSoFar-nums[i]);
        maxSoFar=max(maxSoFar,nums[i]);
    }
    return maxDiff;
     /*O(n^2)
    int sz=nums.size();
     int maxDiff=-1;
     for (int i=0;i<sz;++i)
     {
          for (int j = i+1; j < sz; ++j)
          {
            if (nums[i]<nums[j] )
                maxDiff=max(maxDiff,nums[j]-nums[i]);
          }
     }
     return maxDiff; */
    //O(n)
    /* With min
    int mn = nums[0], res = -1;
    for (int i = 1; i < nums.size(); ++i)
    {
        res = max(res, nums[i] - mn);
        mn = min(mn, nums[i]);
    }
    return res == 0 ? -1 : res;
     */
}