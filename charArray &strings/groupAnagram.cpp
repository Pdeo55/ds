#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(auto str:strs){
            string s=str;
            sort(s.begin(),s.end());
            //insert strs realated to in in map
            mp[s].push_back(str);
        }

        vector<vector<string>> k;
        for(auto it=mp.begin();it!=mp.end();it++){
            k.push_back(it->second);
        }

        return k;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
