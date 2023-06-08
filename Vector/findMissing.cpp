#include <bits/stdc++.h>
using namespace std;



// here is apporoach of indexing with value of the array block
void Missing(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
      if(arr[i]>0){
        cout<<i+1<<" ";
      }
    }
    
}
int main()
{
    vector<int> arr = {3, 3, 5, 3,4 };
    Missing(arr);

    return 0;
}
