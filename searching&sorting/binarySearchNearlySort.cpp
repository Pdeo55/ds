#include <bits/stdc++.h>
using namespace std;

int nearlySortedArray(vector<int> arr, int t)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + e / 2;

    while (s <= e)
    { // nearly sorted menas element must be in i-1,ith or i+1th place
        if (arr[mid] == t)
        {
            return mid;
        }
        else if (arr[mid - 1] <= arr.size() && arr[mid + 1] == t)
        {
            return mid + 1;
        }
        else if (arr[mid - 1] >= 0 && arr[mid - 1] == t)
        {
            return mid - 1;
        }
        else if (arr[mid] < t)
        { // element is in right side now
            s = mid + 2;
        }
        else
        { // element is in left side now
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 50;

    cout << nearlySortedArray(arr, target);
    return 0;
}
