#include <bits/stdc++.h>
using namespace std;


//apporoach 1 :- sorting  tc = nlogn

//Apporoach 2 :- dutch national flag approach
//we will arrange all the numbers to the left side of the arrays using 2 pointer approach

//time complexity =O(n)
//space = O(1)
void printArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void NegativeToLeft(vector<int>& arr){
    int l =0; // handle all negetive no
    int h=arr.size()-1; //handle all positive no

  while (l<h)
  {
   
        if (arr[l]<0)
        {
            l++;
        }
        else if (arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
  }
  
}
int main()
{
    vector<int> arr = {1,2,4,-8,5,-9,-15,12,6,-23};
    NegativeToLeft(arr);
    printArray(arr);

    return 0;
}
