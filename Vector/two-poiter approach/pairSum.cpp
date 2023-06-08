#include <bits/stdc++.h>
using namespace std;

void twoPairSum(vector<int> arr, int sum)
{
    // lets make pairs like (1,3)(1,2) we will use two for loops
    for (int i = 0; i < arr.size(); i++)
    {
        int ele = arr[i];

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (ele + arr[j] == sum)
            {
                cout << "(" << ele << "," << arr[j] << ") has sum " << sum << endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 3, 2, 5, 7, 8, 4};
    int sum;
    cin >> sum;

    twoPairSum(arr, sum);

    return 0;
}
