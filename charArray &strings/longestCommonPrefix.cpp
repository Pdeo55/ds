#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans;
    int i = 0;
    while (true)
    {
        char curr_ch = 0;
        for (auto str : strs)
        {
            // out of bound
            if (i >= str.size())
            {
                curr_ch = 0;
                break;
            }
            // assigning first letter to ch
            if (curr_ch == 0)
            {
                curr_ch = str[i];
            }
            // comapring ch with all the other words if not again assigning ch=0
            else if (curr_ch != str[i])
            {
                curr_ch = 0;
                break;
            }
        }
        if (curr_ch == 0)
        {
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
