#include <bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n)
{
    nums.clear();
    
    int poX = 0;
    int poY = n;

    for (int i = 0; i < n; i++)
    {
        nums.push_back(nums[poX++]);
        nums.push_back(nums[poY++]);
    }

    return nums;
}


int main() 
{
    
}