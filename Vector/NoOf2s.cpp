#include <bits/stdc++.h>
using namespace std;

// number of twos without using == operator
int NoOf2s(vector<int> &arr)
{

    int count =0;

    //by finding sum and then dividing it by 2 so we get total count of numbers;
    // int sum = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] != 2)
    //     {
    //         arr[i] = 0;
    //     }
    //     sum = sum + arr[i];
    // }
    // int count = sum / 2;
    // return count;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 2)
        {
            continue;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 6, 5, 2, 2, 2, 1, 2, 3, 2};

    cout << NoOf2s(arr);
    return 0;
}
