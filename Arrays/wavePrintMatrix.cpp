#include <bits/stdc++.h>
using namespace std;


void waveform( vector<vector<int>>arr){
        int r = arr.size();
        int c =arr[0].size();

        for (int start = 0; start < c; start++)
        {
            if (start & 1 ==0) //even
            {
                for (int i = 0; i < r; i++)
                {
                    cout<<arr[i][start]<<" ";
                }
                
            }
            else {
                for (int i = r-1; i >=0; i--)
                {
                    cout<<arr[i][start]<<" ";
                }
            }
            
        }
        
}

int main()
{
  vector<vector<int>>arr{{1,2,3},{4,5,6,},{7,8,9}};
;
  waveform(arr);
  return 0;
}
