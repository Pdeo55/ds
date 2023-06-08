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
 //3pointer apporoach leetcode Q75
void sortColors(vector<int>& nums) {
        int l =0;
        int m =0;
        int h= nums.size()-1;
       

        while(m<=h){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                l++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else {
                swap(nums[m],nums[h]);
                h--;
            }
        }
    }

    int main(int argc, char const *argv[])
    {
        vector<int> arr ={1,2,1,2,0,0,2,1};

        sortColors(arr);

        printArray(arr);

        return 0;
    }
    
