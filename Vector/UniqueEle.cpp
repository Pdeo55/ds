#include <bits/stdc++.h>
using namespace std;


int Findunique(vector<int>arr,int size){
    int a=0;
    for (int i = 0; i < size; i++)
    {
        a= a^arr[i];// Using XOR operation to find the unique element
    
    }

    return a;
    
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter size of array:-";
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    int uniqueEle = Findunique(arr,arr.size());

    cout<< "unique element is:- "<<uniqueEle;
    
    return 0;
}
