#include <bits/stdc++.h>
using namespace std;
int numJewelsInStones(string jewels, string stones)
{

    // int cnt=0;
    // map<char,int>count;
    // for(int stone:stones)
    //     count[stone]++;
    // for(int jewel: jewels)
    //     cnt+=count[jewel];
    // return cnt;
    int ans=0;
    unordered_set<char>jewelsSet(jewels.begin(),jewels.end());
    for (int stone:stones)
        if (jewelsSet.count(stone))
            ans++;
    return ans;
}
int main() 
{
    cout<<numJewelsInStones("z","ZZZZ")<<endl;
}