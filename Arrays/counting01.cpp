//counting 0's and 1's in the array
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[6]= {1,1,0,1,0,1};
   

    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < 6; i++)
    {
        if(arr[i]==1){
            count1++;
        }
        if (arr[i]==0)
        {
            count0++;
        }
    }

    cout<<" total 1's :- "<<count1;
    cout<<" total 0's :- "<<count0;
    

    return 0;
}
