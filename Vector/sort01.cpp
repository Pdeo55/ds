#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
void sort01(vector<int> arr)
{
    // we are using two pointer apporoach here where start is the startring element if we
    // found 0 in any point we will put 0 in starting and increment the start poinyrt by 1 simlarly
    // for 1's we will change the end by -1
    int start = 0;
    int end = arr.size() - 1;

    int i = 0;

    while (i != end)
    {
        cout << "for i=" << i << " start=" << start << " end=" << end << endl;
        if (arr[i] == 0)
        {
            cout << "found zero" << endl;
            cout << "before swap ";
            printArray(arr);

            swap(arr[start], arr[i]);
            cout << "after  swap ";
            printArray(arr);
            start++;
            i++;
            cout << "now i=" << i << " start=" << start << " end=" << end << endl;
        }
        else
        {
            cout << "found One" << endl;
            cout << "before swap ";
            printArray(arr);
            swap(arr[end], arr[i]);
            cout << "after  swap ";
            printArray(arr);
            end--;
            cout << "now i=" << i << " start=" << start << " end=" << end << endl;
        }
    }

    // print
    printArray(arr);
}

int main(int argc, char const *argv[])
{
    // vector<int> arr = {1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0};
    vector<int> arr = {1, 1, 0, 0};
    // int sum;
    // cin >> sum;

    sort01(arr);

    return 0;
}
