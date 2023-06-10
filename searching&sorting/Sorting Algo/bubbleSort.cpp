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
int main(int argc, char const *argv[])
{
    vector<int> arr{5, 4, 3, 2, 1};

    for (int round = 1; round < arr.size(); round++)
    {
            bool swapped=false; 
        for (int j = 0; j < arr.size() - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    printArray(arr);

    return 0;
}
