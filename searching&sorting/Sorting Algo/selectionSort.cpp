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
    vector<int>arr{5,4,3,2,1};

    for (int i = 0; i < arr.size()-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        swap(arr[i],arr[minIndex]);
        
    }
    printArray(arr);
    


    return 0;
}
