#include <bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x)
{
    vector<int> result;
    int sz=words.size();
    for (int i = 0; i < sz; ++i)
    {
        for (int j = 0; j < words[i].size(); ++j)
        {
            if (words[i][j] == x)
            {
                result.push_back(i);
                break;
            }
        }
    }

    return result;
}
int main() 
{

}