#include <bits/stdc++.h>
using namespace std;
//we can also do it with the stack tc=o(n)
class Solution
{
public:
    string removeDuplicates(string s)
    {
        string ans = "";
        int i = 0;

        while (i < s.length())
        {

            if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
