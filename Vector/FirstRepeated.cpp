#include <bits/stdc++.h>
using namespace std;

// approach 1 with two for loops check value is repeting if yes return index
// tc o(n^2)

// approach 2 :- hashmap tc = o(n)
int firstRepetedIndex(vector<int> &arr)
{

    unordered_map<int, int> hash;

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 6, 5, 2, 2, 2, 2, 3, 2};

    cout << firstRepetedIndex(arr);
    return 0;
}
