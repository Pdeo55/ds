#include <bits/stdc++.h>
using namespace std;

int peakElementInArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        // lets check element is on line A i.r increasing
        if (arr[mid] < arr[mid + 1])
        {
            // so peak must be on right side
            s = mid + 1;
        }
        // elr it is on left side
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {0, 2, 4, 7, 10, 5, 2, 1};

    cout << "index of peak element is " << peakElementInArray(arr);
    return 0;
}
