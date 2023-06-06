#include <bits/stdc++.h>
using namespace std;

void FindUnionWithDuplicate(int arr[], int brr[], int sizea, int sizeb)
{

    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void FindIntersection(int arr[], int brr[], int sizea, int sizeb)
{

    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(brr[j]);
                brr[j] = -1;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 5, 6};
    int sizea = 4;
    int brr[] = {7, 5, 2};
    int sizeb = 3;

    // with common elements

    cout << "printing union of array :-";
    FindUnionWithDuplicate(arr, brr, sizea, sizeb);

    // Find Intersection
    cout << endl
         << "printing intersection of array :-";
    FindIntersection(arr, brr, sizea, sizeb);

    return 0;
}
