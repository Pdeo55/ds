#include <bits/stdc++.h>
using namespace std;

// Approach 1
//  here is apporoach of indexing with value of the array block  // tc=O(n) sc= O(1)
void Missing(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  { // here we are vising the index i.e the value in the arrays position for this we have to start array from 1
    // if we found the element at index then we just negativing it
    int index = abs(arr[i]);
    // here index - 1 is indicating if we found arr[i]=2 so as indexing start from 0 so at 2th indexing will be 1
    if (arr[index - 1] > 0)
    {
      arr[index - 1] *= -1;
    }
  }

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > 0)
    {
      cout << i + 1 << " ";
    }
  }
}

// apporoach 2 :- sorting and swapping
void MissingSwap(vector<int> arr)
{
  int i = 0;

  // here we checking the element is on its place or not if not we are swapping the element on its index position
  // such that index = value
  while (i < arr.size())
  {
    int index = arr[i] - 1;
    if (arr[i] != arr[index])
    {
      swap(arr[i], arr[index]);
    }
    else
    {
      i++;
    }
  }

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] != i + 1)
    {
      cout << i + 1 << " ";
    }
  }
}

int main()
{
  vector<int> arr = {3, 3, 5, 3, 4};
  Missing(arr);
  cout<<endl;

  MissingSwap(arr);

  return 0;
}
